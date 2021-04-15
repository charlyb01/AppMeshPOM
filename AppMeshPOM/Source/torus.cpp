#include "torus.h"
#include "evector.h"

double Torus::Signed(const Vector& p)const
{
	return Signed(p, Vector2(1, 1));
}

double Torus::Signed(const Vector& p, const Vector2& t)const
{
	Vector2 q = Vector2(Norm(Vector2(p[0],p[2])) - t[0], p[1]);
	return Norm(q) - t[1];
}