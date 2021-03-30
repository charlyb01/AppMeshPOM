#include "operator.h"

Operator::Operator(Node* l, Node* r) : left(l), right(r) {}

Operator::~Operator()
{
	delete left;
	delete right;
}
