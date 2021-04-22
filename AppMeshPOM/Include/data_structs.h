#pragma once
#include <vector>
#include <array>
#include <functional>
#include "evector.h"
#include "mesh.h"

namespace MeshReconstruction
{
	struct Rect3
	{
		Vector min;
		Vector size;
	};

	using Fun3s = std::function<double(Vector const&)>;
	using Fun3v = std::function<Vector(Vector const&)>;
}