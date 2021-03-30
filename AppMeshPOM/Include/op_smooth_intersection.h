#ifndef __OPSMOOTHINTERSECTION__
#define __OPSMOOTHINTERSECTION__

#include "operator.h"

class OpSmoothIntersection : public Operator
{
public:
	double Signed(const Vector& vec) const;
	double Signed(const Vector& vec, const double& k) const;
};

#endif
