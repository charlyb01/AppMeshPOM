#ifndef __OPTRANSLATION__
#define __OPTRANSLATION__

#include "unary_operator.h"

class OpTranslation : public UnaryOperator
{
public:
	OpTranslation() = delete;
	OpTranslation(Node* n, const Vector& v) : UnaryOperator(n, v) {}

	double Signed(const Vector&) const;
};

#endif
