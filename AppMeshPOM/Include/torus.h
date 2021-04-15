#ifndef __TORUS__
#define __TORUS__

#include "node.h"

class Torus : public Node
{
public:
	double Signed(const Vector& vec) const;
	double Signed(const Vector& p, const Vector2& t) const;
};

#endif