#ifndef __SPHERE__
#define __SPHERE__

#include "node.h"

/**
* @class Sphere Include/sphere.h
* @brief Primitive for a sphere SDF
*/
class Sphere : public Node
{
protected:
	double radius;	///< Radius of the sphere

public:
	Sphere() : Sphere(1.0) {}
	Sphere(const double& r) : radius(r) {}

	double Signed(const Vector&) const;
};

#endif
