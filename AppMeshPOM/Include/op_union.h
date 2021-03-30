#ifndef __OPUNION__
#define __OPUNION__

#include "operator.h"

class OpUnion : public Operator
{
public:
	double Signed(const Vector& vec) const;
};

#endif
