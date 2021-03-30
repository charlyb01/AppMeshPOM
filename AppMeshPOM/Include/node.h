#ifndef __NODE__
#define __NODE__

#include "evector.h"

class Node
{
public:
	virtual double Signed(const Vector& vec) const = 0;
};

#endif
