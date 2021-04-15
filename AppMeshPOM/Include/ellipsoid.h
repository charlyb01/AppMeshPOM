#ifndef __ELLIPSOID__
#define __ELLIPSOID__

#include "node.h"

class Ellipsoid : public Node
{
public:
	double Signed(const Vector& vec) const;
	double Signed(const Vector& p, const Vector& r) const;
};

#endif