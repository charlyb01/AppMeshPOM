#ifndef __OPUNION__
#define __OPUNION__

#include "operator.h"

class OpUnion : public Operator
{
public:
	OpUnion() = delete;
	OpUnion(Node* l, Node* r) : Operator(l, r) {}

	double Signed(const Vector&) const;
};

#endif
