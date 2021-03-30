#ifndef __OPERATOR__
#define __OPERATOR__

#include "node.h"

class Operator : public Node
{
private:
	Node* left;
	Node* right;

public:
	Operator() = delete;
	Operator(const Operator& op) = delete;

	Operator(Node* l, Node* r);
	~Operator();
};

#endif
