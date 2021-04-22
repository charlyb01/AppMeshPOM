#ifndef __OPSMOOTH__
#define __OPSMOOTH__

#include "operator.h"

class OpSmooth : public Operator
{
protected:
	double k;

public:
	OpSmooth(Node* l, Node* r, const double& a) : Operator(l, r), k(a) {}
};

#endif
