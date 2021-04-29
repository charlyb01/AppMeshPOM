#pragma once

class Math
{
public:
	static double Clamp(double, double = 0.0, double = 1.0);
	static double Mix(double, double, double = 0.5);

	// Minimum and maximum
	static double Min(double, double);
	static double Max(double, double);
	static double Min(double, double, double);
	static double Max(double, double, double);

	static double Sign(double);
	static double Abs(double);
	static double Floor(double);
	static double Fract(double);

	static constexpr double DegreeToRadian(double);
	static constexpr double RadianToDegree(double);
};

/*!
\brief Clamp a double value between two bounds.
\param x Input value.
\param a, b Lower and upper bounds.
*/
inline double Math::Clamp(double x, double a, double b)
{
	return (x < a ? a : (x > b ? b : x));
}

/*!
\brief Linearly interpolate a double value between two reals with a weight.
\param a, b Real values.
\param k Weight.
*/
inline double Math::Mix(double a, double b, double k)
{
	return a * (1-k) + b * k;
}

/*!
\brief Minimum of two reals.
\param a, b Real values.
*/
inline double Math::Min(double a, double b)
{
	return (a < b ? a : b);
}

/*!
\brief Maximum of two reals.
\param a, b Real values.
*/
inline double Math::Max(double a, double b)
{
	return (a > b ? a : b);
}

/*!
\brief Maximum of three reals.
\param a, b, c Real values.
*/
inline double Math::Max(double a, double b, double c)
{
	return Math::Max(Math::Max(a, b), c);
}

/*!
\brief Minimum of three reals.
\param a, b, c Real values.
*/
inline double Math::Min(double a, double b, double c)
{
	return Math::Min(Math::Min(a, b), c);
}

inline double Math::Sign(double a)
{
	if (a > 0) {
		return 1.0;
	}
	return a < 0.0 ? -1.0 : 0.0;
}

inline double Math::Abs(double a)
{
	return a < 0.0 ? -a : a;
}

/*!
\brief Floating part of a real.
\param a Real value.
*/
inline double Math::Fract(double a)
{
	return a - floor(a);
}

/*!
\brief Convert degrees to randians.
\param a Angle in degrees.
*/
inline constexpr double Math::DegreeToRadian(double a)
{
	return a * 3.14159265358979323846 / 180.0;
}

/*!
\brief Convert radian to degrees.
\param a Angle in radian.
*/
inline constexpr double Math::RadianToDegree(double a)
{
	return a * 180.0 / 3.14159265358979323846;
}
