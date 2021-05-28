#ifndef __OPSMOOTHINTERSECTION__
#define __OPSMOOTHINTERSECTION__

#include "bin_op_smooth.h"

/**
* @class OpSmoothIntersection Include/op_smooth_intersection.h
* @brief Operator to keep the intersection of left and right SDF in a smooth way (with interpolation)
*/
class OpSmoothIntersection : public BinOpSmooth
{
public:
	OpSmoothIntersection() = delete;
	OpSmoothIntersection(Node* l, Node* r, const double& a = 1.0) : BinOpSmooth(l, r, a) {}

	double Signed(const Vector&) const;
};

#endif
