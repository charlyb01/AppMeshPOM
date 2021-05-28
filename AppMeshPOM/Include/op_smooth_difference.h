#ifndef __OPSMOOTHDIFFERENCE__
#define __OPSMOOTHDIFFERENCE__

#include "bin_op_smooth.h"

/**
* @class OpSmoothDifference Include/op_smooth_difference.h
* @brief Operator to remove right SDF from the left one in a smooth way (with interpolation)
*/
class OpSmoothDifference : public BinOpSmooth
{
public:
	OpSmoothDifference() = delete;
	OpSmoothDifference(Node* l, Node* r, const double& a = 1.0) : BinOpSmooth(l, r, a) {}

	double Signed(const Vector&) const;
};

#endif
