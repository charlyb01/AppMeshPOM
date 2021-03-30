#ifndef __OPDIFFERENCE__
#define __OPDIFFERENCE__

#include "operator.h"

class OpDifference : public Operator
{
public:
	double Signed(const Vector& vec) const;
};

#endif
