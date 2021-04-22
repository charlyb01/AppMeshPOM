#pragma once
#include "cube.h"
#include "data_structs.h"

namespace MeshReconstruction
{
	void Triangulate(
		IntersectInfo const& intersect,
		Fun3v const& grad,
		Mesh& mesh);
}