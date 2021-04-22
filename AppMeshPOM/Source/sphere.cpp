#include "sphere.h"

double Sphere::Signed(const Vector& vec) const
{
	return Norm(vec)- radius;
}
