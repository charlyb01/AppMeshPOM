#ifndef __PYRAMIDE__
#define __PYRAMIDE__

#include "node.h"

class Pyramid : public Node
{
public:
	double Signed(const Vector& vec) const;
	double Signed(const Vector& p, const float& h) const;
};

#endif
