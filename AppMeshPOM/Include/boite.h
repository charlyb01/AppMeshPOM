#ifndef __BOITE__
#define __BOITE__

#include "node.h"

class Boite : public Node
{
protected:
	Vector diagonal;

public:
	Boite() : Boite(Vector(1, 1, 1)) {}
	Boite(const Vector& d) : diagonal(d / 2.0) {}

	double Signed(const Vector&) const;
};

#endif
