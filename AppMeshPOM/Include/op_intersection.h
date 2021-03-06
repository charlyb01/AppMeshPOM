#ifndef __OPINTERSECTION__
#define __OPINTERSECTION__

#include "binary_operator.h"

/**
* @class OpIntersection Include/op_intersection.h
* @brief Operator to keep the intersection of left and right SDF
*/
class OpIntersection : public BinaryOperator
{
public:
	OpIntersection() = delete;
	OpIntersection(Node* l, Node* r) : BinaryOperator(l, r) {}

	double Signed(const Vector&) const;
};

#endif
