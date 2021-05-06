#include "unary_operator.h"

UnaryOperator::UnaryOperator(Node* n, const Vector& v) : node(n), transformation(v) {}

UnaryOperator::~UnaryOperator()
{
	delete node;
}
