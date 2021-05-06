#ifndef __OPSMOOTHDIFFERENCE__
#define __OPSMOOTHDIFFERENCE__

#include "bin_op_smooth.h"

class OpSmoothDifference : public BinOpSmooth
{
public:
	OpSmoothDifference() = delete;
	OpSmoothDifference(Node* l, Node* r, const double& a = 1.0) : BinOpSmooth(l, r, a) {}

	double Signed(const Vector&) const;
};

#endif
