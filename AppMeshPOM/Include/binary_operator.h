#ifndef __BINARYOPERATOR__
#define __BINARYOPERATOR__

#include "node.h"

/**
* @class BinaryOperator Inlcude/binary_operator.h
* @brief Binary operator to apply to two nodes
*/
class BinaryOperator : public Node
{
protected:
	Node* left;		///< Left child node to whom we apply the operator
	Node* right;	///< Right child node to whom we apply the operator

public:
	BinaryOperator(Node* l, Node* r);
	~BinaryOperator();
};

#endif
