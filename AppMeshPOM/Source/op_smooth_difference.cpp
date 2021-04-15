#include "op_smooth_difference.h"
#include "mathematics.h"

double OpSmoothDifference::Signed(const Vector& vec) const
{
	return Signed(vec, 0.1);
}

double OpSmoothDifference::Signed(const Vector& vec, const double& k) const
{
	double a = left->Signed(vec);
	double b = right->Signed(vec);
	double h = Math::Clamp(0.5 - 0.5 * (b + a) / k);
	return Math::Mix(b, -a, h) + k * h * (1.0 - h);
}