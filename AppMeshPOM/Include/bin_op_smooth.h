#ifndef __BINOPSMOOTH__
#define __BINOPSMOOTH__

#include "binary_operator.h"

class BinOpSmooth : public BinaryOperator
{
protected:
	double k;

public:
	BinOpSmooth(Node* l, Node* r, const double& a) : BinaryOperator(l, r), k(a) {}
};

#endif
