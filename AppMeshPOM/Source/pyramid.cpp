#include "pyramid.h"
#include "mathematics.h"

double Pyramid::Signed(const Vector& vec) const
{
    double m2 = height * height + 0.25;
    Vector2 pxz = Vector2(vec[0], vec[2]);
    pxz = Abs(pxz);
    pxz = (vec[2] > vec[0]) ? Vector2(vec[2], vec[0]) : pxz;
    pxz -= Vector2(0.5);
    Vector q = Vector(pxz[1], height * vec[1] - 0.5 * pxz[0], height * pxz[0] + 0.5 * vec[1]);

    double s = Math::Max(-q[0], 0.0);
    double t = Math::Clamp((q[1] - 0.5 * q[0]) / (m2 + 0.25), 0.0, 1.0);

    double a = m2 * (q[0] + s) * (q[0] + s) + q[1] * q[1];
    double b = m2 * (q[0] + 0.5 * t) * (q[0] + 0.5 * t) + (q[1] - m2 * t) * (q[1] - m2 * t);

    double d2 = Math::Max(-q[1], q[0] * m2 + q[1] * 0.5) < 0.0 ? 0.0 : Math::Min(a, b);

    return sqrt((d2 + q[2] * q[2]) / m2) * Math::Sign(Math::Max(q[2], -vec[1]));

}