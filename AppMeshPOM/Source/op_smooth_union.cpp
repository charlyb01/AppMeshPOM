#include "op_smooth_union.h"
#include "mathematics.h"

double OpSmoothUnion::Signed(const Vector& vec) const
{
	double a = left->Signed(vec);
	double b = right->Signed(vec);
	double h = Math::Clamp(0.5 + 0.5 * (b - a) / k);
	return Math::Mix(b, a, h) - k * h * (1.0 - h);
}
