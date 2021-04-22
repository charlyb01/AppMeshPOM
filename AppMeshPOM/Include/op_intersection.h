#ifndef __OPINTERSECTION__
#define __OPINTERSECTION__

#include "operator.h"

class OpIntersection : public Operator
{
public:
	double Signed(const Vector&) const;
};

#endif
