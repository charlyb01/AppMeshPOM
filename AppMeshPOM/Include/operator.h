#ifndef __OPERATOR__
#define __OPERATOR__

#include "node.h"

class Operator : public Node
{
protected:
	Node* left;
	Node* right;

public:
	Operator(Node* l, Node* r);
	~Operator();
};

#endif
