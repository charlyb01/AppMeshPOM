#ifndef __OPSMOOTHUNION__
#define __OPSMOOTHUNION__

#include "operator.h"

class OpSmoothUnion : public Operator
{
public:
	double Signed(const Vector& vec) const;
	double Signed(const Vector& vec, const double& k) const;
};

#endif
