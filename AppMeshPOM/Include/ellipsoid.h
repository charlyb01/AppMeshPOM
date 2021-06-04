#ifndef __ELLIPSOID__
#define __ELLIPSOID__

#include "node.h"
// Non functional
class Ellipsoid : public Node
{
protected:
	Vector radius;

public:
	Ellipsoid() : Ellipsoid(Vector::Y) {}
	Ellipsoid(const Vector& r) : radius(r) {}

	double Signed(const Vector&) const;
};

#endif
