#include "cone.h"
#include "evector.h"
#include "mathematics.h"

double Cone::Signed(const Vector& p)const
{
	return Signed(p, Vector(1,1,1), 1);
}

double Cone::Signed(const Vector& p, const Vector2& c, const float& h)const
{
	// c is the sin/cos of the angle, h is height
// Alternatively pass q instead of (c,h),
// which is the point at the base in 2D
	Vector2 q = h * Vector2(c[0] / c[1], -1.0);

	Vector2 w = Vector2(Norm(Vector2(p[0],p[2])), p[1]);
	Vector2 a = w - q * Math::Clamp((w * q) /(q * q), 0.0, 1.0);
	q *= Vector2(Math::Clamp(w[0] / q[0], 0.0, 1.0), 1.0);
	Vector2 b = w - q;
	float k = Math::Sign(q[1]);
	float d = Math::Min((a * a), (b * b));
	float s = Math::Max(k * (w[0] * q[1] - w[1] * q[0]), k * (w[1] - q[1]));
	return sqrt(d) * Math::Sign(s);
}
