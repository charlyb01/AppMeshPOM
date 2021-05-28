#ifndef __CAPSULE__
#define __CAPSULE__

#include "node.h"

/**
* @class Capsule Include/capsule.h
* @brief Primitive for a capsule SDF
*/
class Capsule : public Node
{
protected:
	Vector bottomLeft;		///< Bottom of the capsule
	Vector topRight;		///< Top of the capsule
	double radius;			///< Radius of the capsule

public:
	Capsule() : Capsule(Vector::Null, Vector::Y, 1.0) {}
	Capsule(const Vector& a, const Vector& b, const double& r) : bottomLeft(a), topRight(b), radius(r) {}

	double Signed(const Vector&) const;
};

#endif
