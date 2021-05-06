#include "binary_operator.h"

BinaryOperator::BinaryOperator(Node* l, Node* r) : left(l), right(r) {}

BinaryOperator::~BinaryOperator()
{
	delete left;
	delete right;
}
