#ifndef __SPHERE__
#define __SPHERE__

#include "node.h"

class Sphere : public Node
{
public:
	double Signed(const Vector& vec) const;
	double Signed(const Vector& vec, const float& r) const;
};

#endif
