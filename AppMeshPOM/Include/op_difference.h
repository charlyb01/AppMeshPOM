#ifndef __OPDIFFERENCE__
#define __OPDIFFERENCE__

#include "binary_operator.h"

class OpDifference : public BinaryOperator
{
public:
	OpDifference() = delete;
	OpDifference(Node* l, Node* r) : BinaryOperator(l, r) {}

	double Signed(const Vector&) const;
};

#endif
