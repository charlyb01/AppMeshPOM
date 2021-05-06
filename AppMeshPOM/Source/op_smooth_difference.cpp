#include "op_smooth_difference.h"
#include "mathematics.h"

double OpSmoothDifference::Signed(const Vector& vec) const
{
	double b = left->Signed(vec);
	double a = right->Signed(vec);
	double h = Math::Clamp(0.5 - 0.5 * (b + a) / k);
	return Math::Mix(b, -a, h) + k * h * (1.0 - h);
}
