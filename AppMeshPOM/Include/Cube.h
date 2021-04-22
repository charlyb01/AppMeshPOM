#pragma once
#include "data_structs.h"

namespace MeshReconstruction
{
	struct IntersectInfo
	{
		// 0 - 255
		int signConfig;

		// If it exists, vertex on edge i is stored at position i.
		// For edge numbering and location see numberings.png.
		std::array<Vector, 12> edgeVertIndices;
	};

	class Cube
	{
		Vector pos[8];
		double sdf[8];

		Vector LerpVertex(double isoLevel, int i1, int i2) const;
		int SignConfig(double isoLevel) const;

	public:
		Cube(Rect3 const& space, Fun3s const& sdf);

		// Find the vertices where the surface intersects the cube.
		IntersectInfo Intersect(double isoLevel = 0) const;
	};
}