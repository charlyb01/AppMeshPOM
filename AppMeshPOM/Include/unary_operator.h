#ifndef __UNARYOPERATOR__
#define __UNARYOPERATOR__

#include "node.h"

class UnaryOperator : public Node
{
protected:
	Node* node;
	Vector transformation;

public:
	UnaryOperator(Node* n, const Vector& v);
	~UnaryOperator();
};

#endif
