#ifndef __SPHERE__
#define __SPHERE__

#include "node.h"

class Sphere : public Node
{
protected:
	double radius;

public:
	Sphere() : Sphere(1.0) {}
	Sphere(const double& r) : radius(r) {}

	double Signed(const Vector&) const;
};

#endif
