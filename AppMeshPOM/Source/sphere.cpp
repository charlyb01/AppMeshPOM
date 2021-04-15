#include "sphere.h"
#include "evector.h"

double Sphere::Signed(const Vector& p)const
{
	return Signed(p, 1);
}

double Sphere::Signed(const Vector& p, const float& s)const
{
	return Norm(p)- s;
}