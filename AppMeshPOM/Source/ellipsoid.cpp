#include "ellipsoid.h"

double Ellipsoid::Signed(const Vector& vec) const
{
	double k0 = Norm(vec / radius);					// Should be component-wise! WRONG
	double k1 = Norm(vec / (radius * radius));		// Should be component-wise! WRONG
	return k0 * (k0 - 1.0) / k1;
}
