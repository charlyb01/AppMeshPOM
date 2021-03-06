#ifndef __OPUNION__
#define __OPUNION__

#include "binary_operator.h"

/**
* @class OpUnion Include/op_union.h
* @brief Operator to make the union of left and right SDF
*/
class OpUnion : public BinaryOperator
{
public:
	OpUnion() = delete;
	OpUnion(Node* l, Node* r) : BinaryOperator(l, r) {}

	double Signed(const Vector&) const;
};

#endif
