#include "op_union.h"
#include "mathematics.h"

double OpUnion::Signed(const Vector& vec) const
{
	return Math::Min(left->Signed(vec), right->Signed(vec));
}
