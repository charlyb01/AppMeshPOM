#ifndef __BINARYOPERATOR__
#define __BINARYOPERATOR__

#include "node.h"

class BinaryOperator : public Node
{
protected:
	Node* left;
	Node* right;

public:
	BinaryOperator(Node* l, Node* r);
	~BinaryOperator();
};

#endif
