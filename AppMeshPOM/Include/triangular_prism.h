#ifndef __TRIANGULARPRISM__
#define __TRIANGULARPRISM__

#include "node.h"

class TriangularPrism : public Node
{
public:
	double Signed(const Vector& vec) const;
	double Signed(const Vector& p, const Vector2& h) const;
};

#endif