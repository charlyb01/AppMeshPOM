#ifndef __STRAW__
#define __STRAW__

#include "node.h"

/**
* @class Straw Include/straw.h
* @brief Primitive for a straw SDF
*/
class Straw : public Node
{
protected:
	Vector height;

public:
	Straw() : Straw(Vector(1, 1, 1)) {}
	Straw(const Vector& h) : height(h) {}

	double Signed(const Vector&) const;
};

#endif
