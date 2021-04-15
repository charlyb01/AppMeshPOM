#include "triangular_prism.h"
#include "evector.h"
#include "mathematics.h"

double TriangularPrism::Signed(const Vector& p)const
{
	return Signed(p, Vector(1, 1, 1));
}

double TriangularPrism::Signed(const Vector& p, const Vector2& h)const
{
	Vector q = Abs(p);
	return Math::Max(q[2] - h[1], Math::Max(q[0] * 0.866025 + p[1] * 0.5, -p[1]) - h[0] * 0.5);
}