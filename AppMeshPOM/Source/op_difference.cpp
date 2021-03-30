#include "op_difference.h"
#include "mathematics.h"

double OpDifference::Signed(const Vector& vec) const
{
	return Math::Max(-left->Signed(vec), right->Signed(vec));
}
