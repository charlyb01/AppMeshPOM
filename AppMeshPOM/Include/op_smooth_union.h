#ifndef __OPSMOOTHUNION__
#define __OPSMOOTHUNION__

#include "op_smooth.h"

class OpSmoothUnion : public OpSmooth
{
public:
	OpSmoothUnion() = delete;
	OpSmoothUnion(Node* l, Node* r, const double& a = 1.0) : OpSmooth(l, r, a) {}

	double Signed(const Vector&) const;
};

#endif
