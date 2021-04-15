#include "pyramid.h"
#include "evector.h"
#include "mathematics.h"

double Pyramid::Signed(const Vector& p)const
{
	return Signed(p, 1.0);
}

double Pyramid::Signed(const Vector& p, const float& h)const
{
    float m2 = h * h + 0.25;
    Vector2 pxz = Vector2(p[0], p[2]);
    pxz = Abs(pxz);
    pxz = (p[2] > p[0]) ? Vector2(p[2], p[0]) : pxz;
   // pxz -= 0.5;

    Vector q = Vector(pxz[1], h * p[1] - 0.5 * pxz[0], h * pxz[0] + 0.5 * p[1]);

    float s = Math::Max(-q[0], 0.0);
    float t = Math::Clamp((q[1] - 0.5 * pxz[1]) / (m2 + 0.25), 0.0, 1.0);

    float a = m2 * (q[0] + s) * (q[0] + s) + q[1] * q[1];
    float b = m2 * (q[0] + 0.5 * t) * (q[0] + 0.5 * t) + (q[1] - m2 * t) * (q[1] - m2 * t);

    float d2 = Math::Min(q[1], -q[0] * m2 - q[1] * 0.5) > 0.0 ? 0.0 : Math::Min(a, b);

    return sqrt((d2 + q[2] * q[2]) / m2) * Math::Sign(Math::Max(q[2], -p[1]));
}
