#ifndef __OPDIFFERENCE__
#define __OPDIFFERENCE__

#include "operator.h"

class OpDifference : public Operator
{
public:
	OpDifference() = delete;
	OpDifference(Node* l, Node* r) : Operator(l, r) {}

	double Signed(const Vector&) const;
};

#endif
