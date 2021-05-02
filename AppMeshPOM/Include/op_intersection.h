#ifndef __OPINTERSECTION__
#define __OPINTERSECTION__

#include "operator.h"

class OpIntersection : public Operator
{
public:
	OpIntersection() = delete;
	OpIntersection(Node* l, Node* r) : Operator(l, r) {}

	double Signed(const Vector&) const;
};

#endif
