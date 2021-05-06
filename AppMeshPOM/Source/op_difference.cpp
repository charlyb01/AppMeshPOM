#include "op_difference.h"
#include "mathematics.h"

double OpDifference::Signed(const Vector& vec) const
{
	return Math::Max(-right->Signed(vec), left->Signed(vec));
}
