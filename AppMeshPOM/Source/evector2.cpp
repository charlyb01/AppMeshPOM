// Vector  

// Self include
#include "evector.h"
#include <iostream>

/*!
\class Vector2 evector.h
\brief Vectors in two dimensions.

This class implements most operators and member functions as for Vector class.
*/

const Vector2 Vector2::Null(0.0, 0.0);

/*!
\brief Normalize a two dimensional vector.

It computes the inverse of its norm and scaling the components.
This function does not check if the vector is null, which might yield errors.

\param u %Vector.
*/
void Normalize(Vector2& u)
{
  u *= 1.0 / Norm(u);
}

/*!
\brief Swap two vectors.
\param a, b Vectors.
*/
void Swap(Vector2& a, Vector2& b)
{
  Vector2 t = a;
  a = b;
  b = t;
}

/*!
\brief Test if two vectors are almost equal.

\sa Vector::Equal
*/
bool Vector2::Equal(const Vector2& a, const Vector2& b, double epsilon)
{
  Vector2 ab = Abs(b - a);
  if (ab[0] > epsilon || ab[1] > epsilon)
    return false;
  return true;
}

/*!
\brief Overloaded output-stream operator.
\param u %Vector.
\param s Stream.
*/
std::ostream& operator<<(std::ostream& s, const Vector2& u)
{
  s << "Vector2(" << u.c[0] << ',' << u.c[1] << ')';
  return s;
}
