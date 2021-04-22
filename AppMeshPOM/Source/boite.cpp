#include "boite.h"
#include "mathematics.h"

double Boite::Signed(const Vector& vec) const
{
	Vector q = Abs(vec) - diagonal;
	return Math::Abs(Vector::Max(q, 0.0)) + Math::Min(Math::Max(q[0], Math::Max(q[1], q[2])), 0.0);
}
