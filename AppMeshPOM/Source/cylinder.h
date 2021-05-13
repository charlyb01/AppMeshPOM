#ifndef __CYLINDER__
#define __CYLINDER__

#include "node.h"

class Cylinder : public Node
{
protected:
	Vector2 height;

public:
	Cylinder() : Cylinder(Vector2(1, 1)) {}
	Cylinder(const Vector2& h) : height(h) {}

	double Signed(const Vector&) const;
};

#endif
