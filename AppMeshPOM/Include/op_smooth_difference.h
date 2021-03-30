#ifndef __OPSMOOTHDIFFERENCE__
#define __OPSMOOTHDIFFERENCE__

#include "operator.h"

class OpSmoothDifference : public Operator
{
public:
	double Signed(const Vector& vec) const;
	double Signed(const Vector& vec, const double& k) const;
};

#endif
