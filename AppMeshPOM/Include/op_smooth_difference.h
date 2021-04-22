#ifndef __OPSMOOTHDIFFERENCE__
#define __OPSMOOTHDIFFERENCE__

#include "op_smooth.h"

class OpSmoothDifference : public OpSmooth
{
public:
	OpSmoothDifference() = delete;
	OpSmoothDifference(Node* l, Node* r, const double& a = 1.0) : OpSmooth(l, r, a) {}

	double Signed(const Vector&) const;
};

#endif
