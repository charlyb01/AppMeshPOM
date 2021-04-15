#include "ellipsoid.h"
#include "evector.h"
#include "mathematics.h"

double Ellipsoid::Signed(const Vector& p)const
{
	return Signed(p, Vector(1, 1, 1));
}

double Ellipsoid::Signed(const Vector& p, const Vector& r)const
{
	float k0 = Norm(p / r);
	float k1 = Norm(p / (r * r));
	return k0 * (k0 - 1.0) / k1;
}