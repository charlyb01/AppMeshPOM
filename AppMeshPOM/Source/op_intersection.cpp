#include "op_intersection.h"
#include "mathematics.h"

double OpIntersection::Signed(const Vector& vec) const
{
	return Math::Max(left->Signed(vec), right->Signed(vec));
}
