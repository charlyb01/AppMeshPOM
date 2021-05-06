#ifndef __OPROTATION__
#define __OPROTATION__

#include "unary_operator.h"

class OpRotation : public UnaryOperator
{
public:
	OpRotation() = delete;
	OpRotation(Node* n, const Vector& v) : UnaryOperator(n, v) {}

	double Signed(const Vector&) const;
};

#endif
