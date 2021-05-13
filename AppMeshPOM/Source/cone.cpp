#include "cone.h"
#include "mathematics.h"

double Cone::Signed(const Vector& vec) const
{
	Vector a = Normalized(angle);
	float q = Norm(Vector2(vec[0],vec[1]));
	return (Vector2(a[0], a[1]) * Vector2(q,vec[2]));
}
