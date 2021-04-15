#include "capsule.h"
#include "evector.h"
#include "mathematics.h"

double Capsule::Signed(const Vector& p)const
{
	return Signed(p, Vector(1,1,1), Vector(1, 1, 1), 1.0);
}

double Capsule::Signed(const Vector& p, const Vector& a, const Vector& b, const float& r)const
{
	Vector pa = p - a, ba = b - a;
	float h = Math::Clamp(Dot(pa, ba) / Dot(ba, ba), 0.0, 1.0);
	return Norm(pa - ba * h) - r;
}