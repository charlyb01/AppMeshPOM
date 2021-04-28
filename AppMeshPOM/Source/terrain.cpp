#include "terrain.h"

double Terrain::Signed(const Vector& vec) const 
{
    // Rotation matrix
    const Mat2 m2 = Mat2(0.8, -0.6, 0.6, 0.8);

    const double l0 = 350.0;
    const double a0 = 150.0;

    Vector2 vec2(vec);
    Vector2  p = vec2 / l0;
    double a = 0.0;
    double b = 1.0;
    for (unsigned i = 0; i < 4; i++)
    {
        double n = Noise(Vector(p[0], p[1], 0.0));
        a += b * n;
        b *= 0.5;
        p = m2 * p * 2.0;
    }
    const double terrain2D = a + (vec[0] * vec[0]) / 100.0;
    return vec[2] - terrain2D;
}

double Terrain::Noise(const Vector& vec)
{
    Vector i = Vector::Floor(vec);
    Vector f = Vector::Fract(vec);
    f = f * f * (3.0 - 2.0 * f);

    return Math::Mix(Math::Mix(Math::Mix(Vector::Hash(i + Vector(0, 0, 0)),
        Vector::Hash(i + Vector(1, 0, 0)), f[0]),
        Math::Mix(Vector::Hash(i + Vector(0, 1, 0)),
            Vector::Hash(i + Vector(1, 1, 0)), f[0]), f[1]),
        Math::Mix(Math::Mix(Vector::Hash(i + Vector(0, 0, 1)),
            Vector::Hash(i + Vector(1, 0, 1)), f[0]),
            Math::Mix(Vector::Hash(i + Vector(0, 1, 1)),
                Vector::Hash(i + Vector(1, 1, 1)), f[0]), f[1]), f[2]);
}
