#ifndef __OPSMOOTHINTERSECTION__
#define __OPSMOOTHINTERSECTION__

#include "op_smooth.h"

class OpSmoothIntersection : public OpSmooth
{
public:
	OpSmoothIntersection() = delete;
	OpSmoothIntersection(Node* l, Node* r, const double& a = 1.0) : OpSmooth(l, r, a) {}

	double Signed(const Vector&) const;
};

#endif
