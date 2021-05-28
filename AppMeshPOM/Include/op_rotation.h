#ifndef __OPROTATION__
#define __OPROTATION__

#include "unary_operator.h"

/**
* @class OpRotation Include/op_rotation.h
* @brief Operator to rotate a SDF
*/
class OpRotation : public UnaryOperator
{
public:
	OpRotation() = delete;
	OpRotation(Node* n, const Vector& v) : UnaryOperator(n, v) {}

	double Signed(const Vector&) const;
};

#endif
