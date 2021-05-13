#ifndef __CONE__
#define __CONE__

#include "node.h"

class Cone : public Node
{
protected:
	Vector angle;
	Vector2 height;

public:
	Cone() : Cone(Vector::Null, Vector::Null) {}
	Cone(const Vector& a, const Vector& h) : angle(a), height(h) {}

	double Signed(const Vector&) const;
};

#endif
