#ifndef __PYRAMID__
#define __PYRAMID__

#include "node.h"
// Non functional
class Pyramid : public Node
{
protected:
	double height;

public:
	Pyramid() : Pyramid(1.0) {}
	Pyramid(const double& h) : height(h) {}

	double Signed(const Vector&) const;
};

#endif
