#ifndef __OPSMOOTHUNION__
#define __OPSMOOTHUNION__

#include "bin_op_smooth.h"

/**
* @class OpSmoothUnion Include/op_smooth_union.h
* @brief Operator to make the union of left and right SDF in a smooth way (with interpolation)
*/
class OpSmoothUnion : public BinOpSmooth
{
public:
	OpSmoothUnion() = delete;
	OpSmoothUnion(Node* l, Node* r, const double& a = 1.0) : BinOpSmooth(l, r, a) {}

	double Signed(const Vector&) const;
};

#endif
