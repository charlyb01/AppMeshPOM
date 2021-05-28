#ifndef __BINOPSMOOTH__
#define __BINOPSMOOTH__

#include "binary_operator.h"

/**
* @class BinOpSmooth Include/bin_op_smooth.h
* @brief Smooth binary operator to apply to two nodes
*/
class BinOpSmooth : public BinaryOperator
{
protected:
	double k;	///< Smoothness coefficient

public:
	BinOpSmooth(Node* l, Node* r, const double& a) : BinaryOperator(l, r), k(a) {}
};

#endif
