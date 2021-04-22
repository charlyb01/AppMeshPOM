#include "torus.h"

double Torus::Signed(const Vector& vec) const
{
	Vector2 q = Vector2(Norm(Vector2(vec[0], vec[2])) - radiuses[0], vec[1]);
	return Norm(q) - radiuses[1];
}
