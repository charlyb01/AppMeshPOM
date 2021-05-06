#ifndef __OPSMOOTHUNION__
#define __OPSMOOTHUNION__

#include "bin_op_smooth.h"

class OpSmoothUnion : public BinOpSmooth
{
public:
	OpSmoothUnion() = delete;
	OpSmoothUnion(Node* l, Node* r, const double& a = 1.0) : BinOpSmooth(l, r, a) {}

	double Signed(const Vector&) const;
};

#endif
