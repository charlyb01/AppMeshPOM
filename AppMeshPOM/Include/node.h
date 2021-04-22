#ifndef __NODE__
#define __NODE__

#include "evector.h"

class Node
{
public:
	virtual ~Node() {}

	virtual double Signed(const Vector&) const = 0;
};

#endif
