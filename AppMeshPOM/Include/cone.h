#ifndef __CONE__
#define __CONE__

#include "node.h"

class Cone : public Node
{
public:
	double Signed(const Vector& vec) const;
	double Signed(const Vector& p, const Vector2&  c, const float& h) const;
};

#endif
