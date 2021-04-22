#ifndef __CONE__
#define __CONE__

#include "node.h"

class Cone : public Node
{
protected:
	Vector2 angle;
	double height;

public:
	Cone() : Cone(Vector2::Null, 1.0) {}
	Cone(const Vector2& a, const double& h) : angle(a), height(h) {}

	double Signed(const Vector&) const;
};

#endif
