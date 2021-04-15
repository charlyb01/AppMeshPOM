// Vector  

#ifdef min
#undef min
#endif

#ifdef max
#undef max
#endif

#ifndef __Vector__
#define __Vector__

#include <QtCore/QString>
#include "mathematics.h"

// Class
class Vector
{
protected:
  double c[3]; //!< Components.
public:
  //! Empty 
  Vector() {}

  explicit Vector(double);
  explicit Vector(double, double, double);

  // Access members
  double& operator[] (int);
  double operator[] (int) const;

  // Unary operators
  Vector operator+ () const;
  Vector operator- () const;

  // Assignment operators
  Vector& operator+= (const Vector&);
  Vector& operator-= (const Vector&);
  Vector& operator*= (const Vector&);
  Vector& operator/= (const Vector&);
  Vector& operator*= (double);
  Vector& operator/= (double);

  // Binary operators
  friend int operator> (const Vector&, const Vector&);
  friend int operator< (const Vector&, const Vector&);

  friend int operator>= (const Vector&, const Vector&);
  friend int operator<= (const Vector&, const Vector&);

  // Binary operators
  friend Vector operator+ (const Vector&, const Vector&);
  friend Vector operator- (const Vector&, const Vector&);

  friend constexpr double operator* (const Vector&, const Vector&);

  friend Vector operator* (const Vector&, double);
  friend Vector operator* (double, const Vector&);
  friend Vector operator/ (const Vector&, double);

  friend Vector operator/ (const Vector&, const Vector&);

  // Boolean functions
  friend int operator==(const Vector&, const Vector&);
  friend int operator!=(const Vector&, const Vector&);

  // Norm
  friend double Norm(const Vector&);
  friend double SquaredNorm(const Vector&);

  int MaxIndex() const;

  friend void Normalize(Vector&);
  friend Vector Normalized(const Vector&);

  // Compare functions
  static Vector Min(const Vector&, const Vector&);
  static Vector Max(const Vector&, const Vector&);
  static double Max(const Vector&, const double&);

  // Abs
  friend Vector Abs(const Vector&);

  // Orthogonal and orthonormal vectors
  Vector Orthogonal() const;
  void Orthonormal(Vector&, Vector&) const;

  // Swap
  friend void Swap(Vector&, Vector&);
  friend void Swap(Vector*&, Vector*&);

  friend Vector Lerp(const Vector&, const Vector&, double);
  static Vector Bilinear(const Vector&, const Vector&, const Vector&, const Vector&, double, double);
  static Vector Trilinear(const Vector&, const Vector&, const Vector&, const Vector&, const Vector&, const Vector&, const Vector&, const Vector&, double, double, double);

  static double Slope(const Vector&, const Vector&);

  // Classification
  int Octant(const Vector&) const;

  // Scale
  Vector Scaled(const Vector&) const;
  Vector Inverse() const;

  friend std::ostream& operator<<(std::ostream&, const Vector&);

  static Vector Solve(const Vector&, const Vector&, double, double);

public:
  static const Vector Null; //!< Null vector.
  static const Vector X; //!< Vector(1,0,0).
  static const Vector Y; //!< Vector(0,1,0).
  static const Vector Z; //!< Vector(0,0,1).
};

/*!
\brief Create a vector with the same coordinates.
\param a Real.
*/
inline Vector::Vector(double a)
{
  c[0] = c[1] = c[2] = a;
}

/*!
\brief Create a vector with argument coordinates.
\param a,b,c Coordinates.
*/
inline Vector::Vector(double a, double b, double c)
{
  Vector::c[0] = a;
  Vector::c[1] = b;
  Vector::c[2] = c;
}

//! Gets the i-th coordinate of vector.
inline double& Vector::operator[] (int i)
{
  return c[i];
}

//! Returns the i-th coordinate of vector.
inline double Vector::operator[] (int i) const
{
  return c[i];
}

// Unary operators

//! Overloaded.
inline Vector Vector::operator+ () const
{
  return *this;
}

//! Overloaded.
inline Vector Vector::operator- () const
{
  return Vector(-c[0], -c[1], -c[2]);
}

// Assignment unary operators

//! Destructive addition.
inline Vector& Vector::operator+= (const Vector& u)
{
  c[0] += u.c[0]; c[1] += u.c[1]; c[2] += u.c[2];
  return *this;
}

//! Destructive subtraction.
inline Vector& Vector::operator-= (const Vector& u)
{
  c[0] -= u.c[0]; c[1] -= u.c[1]; c[2] -= u.c[2];
  return *this;
}

//! Destructive scalar multiply.
inline Vector& Vector::operator*= (double a)
{
  c[0] *= a; c[1] *= a; c[2] *= a;
  return *this;
}

/*!
\brief Scale a vector.
\param a Scaling vector.
*/
inline Vector Vector::Scaled(const Vector& a) const
{
  return Vector(c[0] * a[0], c[1] * a[1], c[2] * a[2]);
}

/*!
\brief Inverse of a vector.

This function inverses the components of the vector. This is the same as:
\code
Vector v=Vector(1.0/u[0],1.0/u[1],1.0/u[2]);
\endcode
*/
inline Vector Vector::Inverse() const
{
  return Vector(1.0 / c[0], 1.0 / c[1], 1.0 / c[2]);
}

//! Destructive division by a scalar.
inline Vector& Vector::operator/= (double a)
{
  c[0] /= a; c[1] /= a; c[2] /= a;
  return *this;
}

/*!
\brief Destructively scale a vector by another vector.

This is the same as Scale:
\code
Vector u(2.0,-1.0,1.0);
u=u.Scaled(Vector(3.0,1.0,2.0)); // u*=Vector(3.0,1.0,2.0);
\endcode
*/
inline Vector& Vector::operator*= (const Vector& u)
{
  c[0] *= u.c[0]; c[1] *= u.c[1]; c[2] *= u.c[2];
  return *this;
}

//! Destructively divide the components of a vector by another vector.
inline Vector& Vector::operator/= (const Vector& u)
{
  c[0] /= u.c[0]; c[1] /= u.c[1]; c[2] /= u.c[2];
  return *this;
}

//! Compare two vectors.
inline int operator> (const Vector& u, const Vector& v)
{
  return ((u.c[0] > v.c[0]) && (u.c[1] > v.c[1]) && (u.c[2] > v.c[2]));
}

//! Compare two vectors.
inline int operator< (const Vector& u, const Vector& v)
{
  return ((u.c[0] < v.c[0]) && (u.c[1] < v.c[1]) && (u.c[2] < v.c[2]));
}

//! Overloaded
inline int operator>= (const Vector& u, const Vector& v)
{
  return ((u.c[0] >= v.c[0]) && (u.c[1] >= v.c[1]) && (u.c[2] >= v.c[2]));
}

//! Overloaded
inline int operator<= (const Vector& u, const Vector& v)
{
  return ((u.c[0] <= v.c[0]) && (u.c[1] <= v.c[1]) && (u.c[2] <= v.c[2]));
}

//! Adds up two vectors.
inline Vector operator+ (const Vector& u, const Vector& v)
{
  return Vector(u.c[0] + v.c[0], u.c[1] + v.c[1], u.c[2] + v.c[2]);
}

//! Difference between two vectors.
inline Vector operator- (const Vector& u, const Vector& v)
{
  return Vector(u.c[0] - v.c[0], u.c[1] - v.c[1], u.c[2] - v.c[2]);
}

//! Scalar product.
inline constexpr double operator* (const Vector& u, const Vector& v)
{
  return (u.c[0] * v.c[0] + u.c[1] * v.c[1] + u.c[2] * v.c[2]);
}

//! Right multiply by a scalar.
inline Vector operator* (const Vector& u, double a)
{
  return Vector(u.c[0] * a, u.c[1] * a, u.c[2] * a);
}

//! Left multiply by a scalar.
inline Vector operator* (double a, const Vector& v)
{
  return v * a;
}

//! Cross product.
inline Vector operator/ (const Vector& u, const Vector& v)
{
  return Vector(u.c[1] * v.c[2] - u.c[2] * v.c[1], u.c[2] * v.c[0] - u.c[0] * v.c[2], u.c[0] * v.c[1] - u.c[1] * v.c[0]);
}

//! Left multiply by a scalar
inline Vector operator/ (const Vector& u, double a)
{
  return Vector(u.c[0] / a, u.c[1] / a, u.c[2] / a);
}

// Boolean functions

//! Strong equality test.
inline int operator== (const Vector& u, const Vector& v)
{
  return ((u.c[0] == v.c[0]) && (u.c[1] == v.c[1]) && (u.c[2] == v.c[2]));
}

//! Strong difference test.
inline int operator!= (const Vector& u, const Vector& v)
{
  return (!(u == v));
}

/*!
\brief Compute the Euclidean norm of a vector.

This function involves a square root computation, it is in general more efficient to rely on
the squared norm of a vector instead.
\param u %Vector.
\sa SquaredNorm
*/
inline double Norm(const Vector& u)
{
  return sqrt(u.c[0] * u.c[0] + u.c[1] * u.c[1] + u.c[2] * u.c[2]);
}

/*!
\brief Compute the squared Euclidean norm of a vector.
\param u %Vector.
\sa Norm
*/
inline double SquaredNorm(const Vector& u)
{
  return (u.c[0] * u.c[0] + u.c[1] * u.c[1] + u.c[2] * u.c[2]);
}

/*!
\brief Return a normalized vector.

Compute the inverse of its norm and scale the components.

This function does not check if the vector is null.
\param u %Vector.
*/
inline Vector Normalized(const Vector& u)
{
  return u * (1.0 / Norm(u));
}

/*!
\brief Compute the index of the maximum component of a vector.

\code
Vector a(-1.0,-3.0,2.0);
int i=MaxIndex(Abs(a)); // Should be 1
\endcode

This function can be used to find the most stretched axis of a bounding box,
for instance to cut the box in the middle of this stretched axis:

\code
Box box;
int axis = box.Diagonal().MaxIndex();
\endcode

\sa Max
*/
inline int Vector::MaxIndex() const
{
  if (c[0] >= c[1])
  {
    if (c[0] >= c[2])
    {
      return 0;
    }
    else
    {
      return 2;
    }
  }
  else
  {
    if (c[1] >= c[2])
    {
      return 1;
    }
    else
    {
      return 2;
    }
  }
}

/*!
\brief Computes the absolute value of a vector.
\param u %Vector.
*/
inline Vector Abs(const Vector& u)
{
  return Vector(u[0] > 0.0 ? u[0] : -u[0], u[1] > 0.0 ? u[1] : -u[1], u[2] > 0.0 ? u[2] : -u[2]);
}

/*!
\brief Return a vector with coordinates set to the minimum coordinates
of the two argument vectors.
*/
inline Vector Vector::Min(const Vector& a, const Vector& b)
{
  return Vector(a[0] < b[0] ? a[0] : b[0], a[1] < b[1] ? a[1] : b[1], a[2] < b[2] ? a[2] : b[2]);
}

/*!
\brief Return a vector with coordinates set to the maximum coordinates
of the two argument vectors.
*/
inline Vector Vector::Max(const Vector& a, const Vector& b)
{
  return Vector(a[0] > b[0] ? a[0] : b[0], a[1] > b[1] ? a[1] : b[1], a[2] > b[2] ? a[2] : b[2]);
}

/*!
\If the parameter vector has a value less than the given double
then this value is replaced by the value of the double.
\param vec
\param a is double
*/
inline double Vector::Max(const Vector& vec, const double& a)
{
    return Math::Max(Math::Max(vec[0], vec[1], vec[2]), a);
}

/*!
\brief Linear interpolation between two vectors.
\param a,b Interpolated points.
\param t Interpolant.
*/
inline Vector Lerp(const Vector& a, const Vector& b, double t)
{
  return a + t * (b - a);
}

/*!
\brief Bi-linear interpolation between four vectors.

The values are given in trigonometric order.

\param a00,a10,a11,a01 Interpolated vectors.
\param u,v Interpolation coefficients.

\sa Math::Bilinear
*/
inline Vector Vector::Bilinear(const Vector& a00, const Vector& a10, const Vector& a11, const Vector& a01, double u, double v)
{
  return (1 - u) * (1 - v) * a00 + (1 - u) * (v)*a01 + (u) * (1 - v) * a10 + (u) * (v)*a11;
}

/*!
\brief Compute the vertical slope between two vectors.

This is a convenience function.
\param a,b Argument vectors.
*/
inline double Vector::Slope(const Vector& a, const Vector& b)
{
  Vector ab = b - a;
  return (ab[2]) / sqrt(ab[0] * ab[0] + ab[1] * ab[1]);
}

/*!
\brief Compute the point on a segment such that the linear function satisfies f(a)=va and f(b)=vb.

This function can be used as a first approximation for computing the intersection between a segment and an implicit surface.
\image html intersection.png

\sa Linear::Solve(double a, double b, const Vector&, const Vector&);
*/
inline Vector Vector::Solve(const Vector& a, const Vector& b, double va, double vb)
{
  return (vb * a - va * b) / (vb - va);
}

// Class
class Vector2
{
protected:
  double c[2]; //!< Components.
public:
  //! Empty.
  Vector2() {}

  explicit Vector2(double);
  explicit Vector2(double, double);
  Vector2(const Vector&);

  double& operator[] (int);
  double operator[] (int) const;

  Vector2 Orthogonal() const;

  // Unary operators
  Vector2 operator+ () const;
  Vector2 operator- () const;

  // Assignment operators
  Vector2& operator+= (const Vector2&);
  Vector2& operator-= (const Vector2&);
  Vector2& operator*= (const Vector2&);
  Vector2& operator/= (const Vector2&);
  Vector2& operator*= (double);
  Vector2& operator/= (double);

  // Binary operators
  friend int operator> (const Vector2&, const Vector2&);
  friend int operator< (const Vector2&, const Vector2&);

  friend int operator>= (const Vector2&, const Vector2&);
  friend int operator<= (const Vector2&, const Vector2&);

  // Binary operators
  friend Vector2 operator+ (const Vector2&, const Vector2&);
  friend Vector2 operator- (const Vector2&, const Vector2&);

  friend double operator* (const Vector2&, const Vector2&);

  friend Vector2 operator* (const Vector2&, double);
  friend Vector2 operator* (double, const Vector2&);
  friend Vector2 operator/ (const Vector2&, double);

  friend double operator/ (const Vector2&, const Vector2&);

  // Boolean functions
  friend int operator==(const Vector2&, const Vector2&);
  friend int operator!=(const Vector2&, const Vector2&);

  // Norm
  friend double Norm(const Vector2&);
  friend double SquaredNorm(const Vector2&);

  friend void Normalize(Vector2&);
  friend Vector2 Normalized(const Vector2&);

  static bool Equal(const Vector2&, const Vector2&, double = 0.0001);

  // Conversion
  Vector ToVector(double = 0.0) const;

  Vector2 Inverse() const;

  // Compare functions
  static Vector2 Min(const Vector2&, const Vector2&);
  static Vector2 Max(const Vector2&, const Vector2&);
  int MaxIndex() const;

  // Abs
  friend Vector2 Abs(const Vector2&);

  // Swap
  friend void Swap(Vector2&, Vector2&);

  friend Vector2 Lerp(const Vector2&, const Vector2&, double);
  static Vector2 Bilinear(const Vector2&, const Vector2&, const Vector2&, const Vector2&, double, double);

  friend std::ostream& operator<<(std::ostream&, const Vector2&);

  Vector2 Scaled(const Vector2&) const;
  void Scale(const Vector2&);

  static Vector2 Solve(const Vector2&, const Vector2&, double, double);
  static bool Clockwise(const Vector2&, const Vector2&, const Vector2&);

public:
  static const Vector2 Null; //!< Null vector.
};

/*!
\brief Create a vector with the same real coordinates.
\param a Real.
*/
inline Vector2::Vector2(double a)
{
  c[0] = c[1] = a;
}

//! Create a vector with argument coordinates.
inline Vector2::Vector2(double a, double b)
{
  Vector2::c[0] = a;
  Vector2::c[1] = b;
}

//! Create a two dimension vector from another three dimension vector.
inline Vector2::Vector2(const Vector& v)
{
  c[0] = v[0];
  c[1] = v[1];
}

//! Gets the i-th coordinate of vector.
inline double& Vector2::operator[] (int i)
{
  return c[i];
}

//! Returns the i-th coordinate of vector.
inline double Vector2::operator[] (int i) const
{
  return c[i];
}

/*!
\brief Convert a Vector2 to a Vector.
\param z Extra coordinate.
*/
inline Vector Vector2::ToVector(double z) const
{
  return Vector(c[0], c[1], z);
}

// Unary operators

//! Overloaded.
inline Vector2 Vector2::operator+ () const
{
  return *this;
}

//! Overloaded.
inline Vector2 Vector2::operator- () const
{
  return Vector2(-c[0], -c[1]);
}

// Assignment unary operators

//! Destructive addition.
inline Vector2& Vector2::operator+= (const Vector2& u)
{
  c[0] += u.c[0]; c[1] += u.c[1];
  return *this;
}

//! Destructive subtraction.
inline Vector2& Vector2::operator-= (const Vector2& u)
{
  c[0] -= u.c[0]; c[1] -= u.c[1];
  return *this;
}

//! Destructive scalar multiply.
inline Vector2& Vector2::operator*= (double a)
{
  c[0] *= a; c[1] *= a;
  return *this;
}

//! Destructive division by a scalar.
inline Vector2& Vector2::operator/= (double a)
{
  c[0] /= a; c[1] /= a;
  return *this;
}

//! Destructively scale a vector by another vector.
inline Vector2& Vector2::operator*= (const Vector2& u)
{
  c[0] *= u.c[0]; c[1] *= u.c[1];
  return *this;
}

//! Destructively divide the components of a vector by another vector.
inline Vector2& Vector2::operator/= (const Vector2& u)
{
  c[0] /= u.c[0]; c[1] /= u.c[1];
  return *this;
}

//! Compare two vectors.
inline int operator> (const Vector2& u, const Vector2& v)
{
  return ((u.c[0] > v.c[0]) && (u.c[1] > v.c[1]));
}

//! Compare two vectors.
inline int operator< (const Vector2& u, const Vector2& v)
{
  return ((u.c[0] < v.c[0]) && (u.c[1] < v.c[1]));
}

//! Overloaded
inline int operator>= (const Vector2& u, const Vector2& v)
{
  return ((u.c[0] >= v.c[0]) && (u.c[1] >= v.c[1]));
}

//! Overloaded
inline int operator<= (const Vector2& u, const Vector2& v)
{
  return ((u.c[0] <= v.c[0]) && (u.c[1] <= v.c[1]));
}

//! Adds up two vectors.
inline Vector2 operator+ (const Vector2& u, const Vector2& v)
{
  return Vector2(u.c[0] + v.c[0], u.c[1] + v.c[1]);
}

//! Difference between two vectors.
inline Vector2 operator- (const Vector2& u, const Vector2& v)
{
  return Vector2(u.c[0] - v.c[0], u.c[1] - v.c[1]);
}

/*!
\brief Dot product between two vectors.
\param u,v Argument vectors.
*/
inline double operator* (const Vector2& u, const Vector2& v)
{
  return u.c[0] * v.c[0] + u.c[1] * v.c[1];
}

//! Right multiply by a scalar.
inline Vector2 operator* (const Vector2& u, double a)
{
  return Vector2(u.c[0] * a, u.c[1] * a);
}

//! Left multiply by a scalar.
inline Vector2 operator* (double a, const Vector2& v)
{
  return v * a;
}

/*!
\brief Cross productof two vectors.
Note that the derminant of a 2-square matrix is the cross product of its two colum vectors.
*/
inline double operator/ (const Vector2& u, const Vector2& v)
{
  return u.c[0] * v.c[1] - u.c[1] * v.c[0];
}

//! Left divide by a scalar
inline Vector2 operator/ (const Vector2& u, double a)
{
  return Vector2(u.c[0] / a, u.c[1] / a);
}

// Boolean functions

/*!
\brief Strong equality test.
*/
inline int operator== (const Vector2& u, const Vector2& v)
{
  return ((u.c[0] == v.c[0]) && (u.c[1] == v.c[1]));
}

/*!
\brief Strong difference test.
*/
inline int operator!= (const Vector2& u, const Vector2& v)
{
  return (!(u == v));
}

/*!
\brief Compute the Euclidean norm of a vector.
This function involves a square root computation, it is often more efficient to rely on
the squared norm of a vector instead. \sa SquaredNorm
*/
inline double Norm(const Vector2& u)
{
  return sqrt(u.c[0] * u.c[0] + u.c[1] * u.c[1]);
}

/*!
\brief Compute the squared Euclidean norm of a vector.
\sa Norm
*/
inline double SquaredNorm(const Vector2& u)
{
  return (u.c[0] * u.c[0] + u.c[1] * u.c[1]);
}

/*!
\brief Return a Normalized a vector, computing the inverse of its norm and scaling the components.
This function does not check if
the vector is null, which might result in errors.
*/
inline Vector2 Normalized(const Vector2& u)
{
  return u * (1.0 / Norm(u));
}

/*!
\brief Computes the absolute value of a vector.
*/
inline Vector2 Abs(const Vector2& u)
{
  return Vector2(u[0] > 0.0 ? u[0] : -u[0], u[1] > 0.0 ? u[1] : -u[1]);
}


/*!
\brief Return a vector with coordinates set to the minimum coordinates
of the two argument vectors.
*/
inline Vector2 Vector2::Min(const Vector2& a, const Vector2& b)
{
  return Vector2(a[0] < b[0] ? a[0] : b[0], a[1] < b[1] ? a[1] : b[1]);
}

/*!
\brief Return a vector with coordinates set to the maximum coordinates
of the two argument vectors.
*/
inline Vector2 Vector2::Max(const Vector2& a, const Vector2& b)
{
  return Vector2(a[0] > b[0] ? a[0] : b[0], a[1] > b[1] ? a[1] : b[1]);
}

/*!
\brief Compute the index of the maximum component of a vector.

\code
Vector a(-1.0,-3.0);
int i=MaxIndex(Abs(a)); // Should be 1
\endcode

\sa Vector::MaxIndex()
*/
inline int Vector2::MaxIndex() const
{
  if (c[0] >= c[1])
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

/*!
\brief Scales the vector.
\param a Scaling vector.
*/
inline Vector2 Vector2::Scaled(const Vector2& a) const
{
  return Vector2(c[0] * a[0], c[1] * a[1]);
}

/*!
\brief Scales the vector.
\param a Scaling vector.
*/
inline void Vector2::Scale(const Vector2& a)
{
  c[0] *= a[0];
  c[1] *= a[1];
}

/*!
\brief Returns a direct orthogonal vector.
*/
inline Vector2 Vector2::Orthogonal() const
{
  return Vector2(-c[1], c[0]);
}

/*!
\brief Returns true if the three points make a clockwise turn.
\param a,b,c Points.
\sa WhichSide
*/
inline bool Vector2::Clockwise(const Vector2& a, const Vector2& b, const Vector2& c)
{
  return (b - a) / (c - a) < 0.0;
}

/*!
\brief Linear interpolation between two vectors.
\param a,b Interpolated points.
\param t Interpolant.
*/
inline Vector2 Lerp(const Vector2& a, const Vector2& b, double t)
{
  return a + t * (b - a);
}


/*!
\brief Bi-linear interpolation between four vectors.

The vectors are given in trigonometric order.

\param a00,a10,a11,a01 Interpolated vectors.
\param u,v Interpolation coefficients.

\sa Math::Bilinear
*/
inline Vector2 Vector2::Bilinear(const Vector2& a00, const Vector2& a10, const Vector2& a11, const Vector2& a01, double u, double v)
{
  return (1 - u) * (1 - v) * a00 + (1 - u) * (v)*a01 + (u) * (1 - v) * a10 + (u) * (v)*a11;
}

/*!
\brief Compute the point on a segment such that the linear function satisfies f(a)=va and f(b)=vb.

\sa Vector::Solve(double a, double b, const Vector&, const Vector&);
*/
inline Vector2 Vector2::Solve(const Vector2& a, const Vector2& b, double va, double vb)
{
  return (vb * a - va * b) / (vb - va);
}

/*!
\brief Inverse of a vector.

This function inverses the components of the vector.
\sa Vector::Inverse()
*/
inline Vector2 Vector2::Inverse() const
{
  return Vector2(1.0 / c[0], 1.0 / c[1]);
}

#endif
