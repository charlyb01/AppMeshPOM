#ifndef __MATRIX4__
#define __MATRIX4__

#include "evector.h"

class Mat4
{
private:
	double m[4][4];

public:
    Mat4(
        const float t00 = 1.f, const float t01 = 0.f, const float t02 = 0.f, const float t03 = 0.f,
        const float t10 = 0.f, const float t11 = 1.f, const float t12 = 0.f, const float t13 = 0.f,
        const float t20 = 0.f, const float t21 = 0.f, const float t22 = 1.f, const float t23 = 0.f,
        const float t30 = 0.f, const float t31 = 0.f, const float t32 = 0.f, const float t33 = 1.f);

    Vector operator() (const Vector& v) const;
    Mat4 inverse() const;

    static Mat4 Translation(const Vector& v);
    static Mat4 RotationX(const double angle);
    static Mat4 RotationY(const double angle);
    static Mat4 RotationZ(const double angle);
};

#endif
