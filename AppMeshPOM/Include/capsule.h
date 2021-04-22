#ifndef __CAPSULE__
#define __CAPSULE__

#include "node.h"

class Capsule : public Node
{
protected:
	Vector bottomLeft, topRight;
	double radius;

public:
	Capsule() : Capsule(Vector::Null, Vector::Y, 1.0) {}
	Capsule(const Vector& a, const Vector& b, const double& r) : bottomLeft(a), topRight(b), radius(r) {}

	double Signed(const Vector&) const;
};

#endif
