#include "capsule.h"
#include "mathematics.h"

double Capsule::Signed(const Vector& vec) const
{
	Vector pa = vec - bottomLeft, ba = topRight - bottomLeft;
	double h = Math::Clamp((pa * ba) / (ba * ba), 0.0, 1.0);
	return Norm(pa - ba * h) - radius;
}
