#include "straw.h"
#include "mathematics.h"

double Straw::Signed(const Vector& vec) const
{
	return Norm(Vector2(vec[0], vec[2]) - Vector2(height[0], height[1])) - height[2];
}
