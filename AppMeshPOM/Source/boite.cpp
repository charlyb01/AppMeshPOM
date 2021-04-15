#include "boite.h"
#include "evector.h"
#include "mathematics.h"

double Boite::Signed(const Vector& p)const
{
	return Signed(p, Vector(1,1,1));
}

double Boite::Signed(const Vector& p, const Vector& b)const
{
	Vector q = Abs(p) - b;
	return Math::Abs(Vector::Max(q, 0.0)) + Math::Min(Math::Max(q[0], Math::Max(q[1], q[2])), 0.0);
}
