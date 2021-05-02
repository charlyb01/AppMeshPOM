#include "mesh_reconstruction.h"
#include "cube.h"
#include "triangulation.h"

using namespace MeshReconstruction;
using namespace std;

// Adapted from here: http://paulbourke.net/geometry/polygonise/

namespace
{
	Vector NumGrad(Fun3s const& f, Vector const& p)
	{
		double const Eps = 1e-6;
		Vector epsX = Vector(Eps, 0, 0);
		Vector epsY = Vector(0, Eps, 0);
		Vector epsZ = Vector(0, 0, Eps);;
		double gx = (f(p + epsX) - f(p - epsX)) / 2;
		double gy = (f(p + epsY) - f(p - epsY)) / 2;
		double gz = (f(p + epsZ) - f(p - epsZ)) / 2;
		return Vector(gx, gy, gz);
	}
}

Mesh MeshReconstruction::MarchCube(
	Fun3s const& sdf,
	Rect3& domain,
	unsigned const& cubeSize,
	double isoLevel,
	Fun3v sdfGrad)
{
	// Default value.
	sdfGrad = sdfGrad == nullptr
		? [&sdf](Vector const& p) { return NumGrad(sdf, p); }
		: sdfGrad;

	for (unsigned i = 0; i < 3; i++)
	{
		if (int(domain.size[i]) % cubeSize != 0)
		{
			domain.size[i] = ((int(domain.size[i]) / double(cubeSize)) + 1) * cubeSize;
		}
	}

	const unsigned NumX = static_cast<unsigned>(ceil(domain.size[0] / cubeSize));
	const unsigned NumY = static_cast<unsigned>(ceil(domain.size[1] / cubeSize));
	const unsigned NumZ = static_cast<unsigned>(ceil(domain.size[2] / cubeSize));

	Vector vectorCube = Vector(cubeSize);
	double const HalfCubeDiag = Norm(vectorCube) / 2.0;
	Vector const HalfCubeSize = vectorCube * 0.5;

	Mesh mesh;

	for (unsigned ix = 0; ix < NumX; ++ix)
	{
		double x = domain.min[0] + double(ix) * cubeSize;
			
		for (unsigned iy = 0; iy < NumY; ++iy)
		{
			double y = domain.min[1] + double(iy) * cubeSize;
			
			for (unsigned iz = 0; iz < NumZ; ++iz)
			{
				double z = domain.min[2] + double(iz) * cubeSize;
				Vector min = Vector(x, y, z);

				// Process only if cube lies within narrow band around surface.
				Vector cubeCenter = min + HalfCubeSize;
				double dist = abs(sdf(cubeCenter) - isoLevel);
				if (dist > HalfCubeDiag) continue;

				Cube cube({ min, vectorCube }, sdf);
				MeshReconstruction::IntersectInfo intersect = cube.Intersect(isoLevel);
				Triangulate(intersect, sdfGrad, mesh);
			}
		}
	}

	return mesh;
}
