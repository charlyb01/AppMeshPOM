#ifndef __OPSMOOTHINTERSECTION__
#define __OPSMOOTHINTERSECTION__

#include "bin_op_smooth.h"

class OpSmoothIntersection : public BinOpSmooth
{
public:
	OpSmoothIntersection() = delete;
	OpSmoothIntersection(Node* l, Node* r, const double& a = 1.0) : BinOpSmooth(l, r, a) {}

	double Signed(const Vector&) const;
};

#endif
