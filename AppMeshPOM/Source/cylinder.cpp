#include "cylinder.h"
#include "mathematics.h"

double Cylinder::Signed(const Vector& vec) const
{
	Vector2 d = Abs(Vector2(Norm(Vector2(vec[0], vec[2])), vec[1])) - Vector2(height[0], height[1]);
	return Math::Min(Math::Max(d[0], d[1]), 0.0) + Norm(Vector2(Math::Max(d[0], 0.0), Math::Max(d[1], 0.0)));
}
