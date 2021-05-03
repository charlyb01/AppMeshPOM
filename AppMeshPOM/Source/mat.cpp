#include "mat.h"
#include "mathematics.h"

Mat4::Mat4(
    const float t00, const float t01, const float t02, const float t03,
    const float t10, const float t11, const float t12, const float t13,
    const float t20, const float t21, const float t22, const float t23,
    const float t30, const float t31, const float t32, const float t33)
{
    m[0][0] = t00; m[0][1] = t01; m[0][2] = t02; m[0][3] = t03;
    m[1][0] = t10; m[1][1] = t11; m[1][2] = t12; m[1][3] = t13;
    m[2][0] = t20; m[2][1] = t21; m[2][2] = t22; m[2][3] = t23;
    m[3][0] = t30; m[3][1] = t31; m[3][2] = t32; m[3][3] = t33;
}

Vector Mat4::operator() (const Vector& v) const
{
    double xt = m[0][0] * v[0] + m[0][1] * v[1] + m[0][2] * v[2];                  // dot(vec4(m[0]), vec4(v, 0))
    double yt = m[1][0] * v[0] + m[1][1] * v[1] + m[1][2] * v[2];                  // dot(vec4(m[1]), vec4(v, 0))
    double zt = m[2][0] * v[0] + m[2][1] * v[1] + m[2][2] * v[2];                  // dot(vec4(m[2]), vec4(v, 0))
    // dot(vec4(m[3]), vec4(v, 0)) == dot(vec4(0, 0, 0, 1), vec4(v, 0)) == 0 par definition

    return Vector(xt, yt, zt);
}

Mat4 Mat4::inverse() const
{
    Mat4 minv = *this;

    int indxc[4], indxr[4];
    int ipiv[4] = { 0, 0, 0, 0 };

    for (int i = 0; i < 4; i++) {
        int irow = -1, icol = -1;
        float big = 0.f;

        // Choose pivot
        for (int j = 0; j < 4; j++) {
            if (ipiv[j] != 1) {
                for (int k = 0; k < 4; k++) {
                    if (ipiv[k] == 0) {
                        if (fabsf(minv.m[j][k]) >= big) {
                            big = std::abs(minv.m[j][k]);
                            irow = j;
                            icol = k;
                        }
                    }
                    else if (ipiv[k] > 1)
                        printf("singular matrix in Transform::inverse()\n");
                }
            }
        }

        assert(irow >= 0 && irow < 4);
        assert(icol >= 0 && icol < 4);

        ++ipiv[icol];
        // Swap rows _irow_ and _icol_ for pivot
        if (irow != icol) {
            for (int k = 0; k < 4; ++k)
                std::swap(minv.m[irow][k], minv.m[icol][k]);
        }

        indxr[i] = irow;
        indxc[i] = icol;
        if (minv.m[icol][icol] == 0.)
            printf("singular matrix in Transform::inverse()\n");

        // Set $m[icol][icol]$ to one by scaling row _icol_ appropriately
        float pivinv = 1.f / minv.m[icol][icol];
        minv.m[icol][icol] = 1.f;
        for (int j = 0; j < 4; j++)
            minv.m[icol][j] *= pivinv;

        // Subtract this row from others to zero out their columns
        for (int j = 0; j < 4; j++) {
            if (j != icol) {
                float save = minv.m[j][icol];
                minv.m[j][icol] = 0;
                for (int k = 0; k < 4; k++)
                    minv.m[j][k] -= minv.m[icol][k] * save;
            }
        }
    }

    // Swap columns to reflect permutation
    for (int j = 3; j >= 0; j--) {
        if (indxr[j] != indxc[j]) {
            for (int k = 0; k < 4; k++)
                std::swap(minv.m[k][indxr[j]], minv.m[k][indxc[j]]);
        }
    }

    return minv;
}


Mat4 Mat4::Translation(const Vector& v)
{
    return Mat4(
        1, 0, 0, v[0],
        0, 1, 0, v[1],
        0, 0, 1, v[2],
        0, 0, 0, 1);
}

Mat4 Mat4::RotationX(const double a)
{
    double sin_t = sin(Math::DegreeToRadian(a));
    double cos_t = cos(Math::DegreeToRadian(a));

    return Mat4(
        1, 0, 0, 0,
        0, cos_t, -sin_t, 0,
        0, sin_t, cos_t, 0,
        0, 0, 0, 1);
}

Mat4 Mat4::RotationY(const double a)
{
    double sin_t = sin(Math::DegreeToRadian(a));
    double cos_t = cos(Math::DegreeToRadian(a));

    return Mat4(
        cos_t, 0, sin_t, 0,
        0, 1, 0, 0,
        -sin_t, 0, cos_t, 0,
        0, 0, 0, 1);
}

Mat4 Mat4::RotationZ(const double a)
{
    double cos_t = sin(Math::DegreeToRadian(a));
    double sin_t = cos(Math::DegreeToRadian(a));

    return Mat4(
        cos_t, -sin_t, 0, 0,
        sin_t, cos_t, 0, 0,
        0, 0, 1, 0,
        0, 0, 0, 1);
}
