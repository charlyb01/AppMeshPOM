#ifndef __TORUS__
#define __TORUS__

#include "node.h"

class Torus : public Node
{
protected:
	Vector2 radiuses;

public:
	Torus() : Torus(Vector2(1.0, 0.5)) {}
	Torus(const Vector2& r) : radiuses(r) {}

	double Signed(const Vector&) const;
};

#endif
