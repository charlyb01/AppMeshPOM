#ifndef __CAPSULE__
#define __CAPSULE__

#include "node.h"

class Capsule : public Node
{
public:
	double Signed(const Vector& vec) const;
	double Signed(const Vector& p, const Vector& a, const Vector& b, const float& r) const;
};

#endif