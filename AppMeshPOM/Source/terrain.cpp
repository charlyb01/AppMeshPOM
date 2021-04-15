#include "terrain.h"

double Terrain::Signed(const Vector& vec) const 
{
    // Rotation matrix
    const Mat2 m2 = Mat2(0.8, -0.6, 0.6, 0.8);

    const float l0 = 350.0;
    const float a0 = 150.0;

    Vector2 vec2(vec[0], vec[2]);
    Vector2  p = vec2 / l0;
    float a = 0.0;
    float b = 1.0;
    for (int i = 0; i < 4; i++)
    {
        float n = Noise(Vector(p[0], p[1], 0.0));
        a += b * n;
        b *= 0.5;
        p = m2 * p * 2.0;
    }
    const float terrain2D = a + (vec[0] * vec[0]) / 100.0;
    return vec[1] - terrain2D;
}
