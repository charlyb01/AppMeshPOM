#include "cone.h"
#include "mathematics.h"

double Cone::Signed(const Vector& vec) const
{
	Vector2 q = height * Vector2(angle[0] / angle[1], -1.0);

	Vector2 w = Vector2(Norm(Vector2(vec[0], vec[2])), vec[1]);
	Vector2 a = w - q * Math::Clamp((w * q) /(q * q), 0.0, 1.0);
	q *= Vector2(Math::Clamp(w[0] / q[0], 0.0, 1.0), 1.0);
	Vector2 b = w - q;
	double k = Math::Sign(q[1]);
	double d = Math::Min((a * a), (b * b));
	double s = Math::Max(k * (w[0] * q[1] - w[1] * q[0]), k * (w[1] - q[1]));
	return sqrt(d) * Math::Sign(s);
}
