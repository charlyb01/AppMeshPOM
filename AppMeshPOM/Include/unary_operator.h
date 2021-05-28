#ifndef __UNARYOPERATOR__
#define __UNARYOPERATOR__

#include "node.h"

/**
* @class UnaryOperator Include/unary_operator.h
* @brief Unary operator to apply to a node
*/
class UnaryOperator : public Node
{
protected:
	Node* node;					///< Child node to whom we apply the operator
	Vector transformation;		///< Spatial transformation of the child

public:
	UnaryOperator(Node* n, const Vector& v);
	~UnaryOperator();
};

#endif
