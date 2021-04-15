#ifndef __BOITE__
#define __BOITE__

#include "node.h"

class Boite : public Node
{
public:
	double Signed(const Vector& vec) const;
	double Signed(const Vector& p, const Vector& b) const;
};

#endif
