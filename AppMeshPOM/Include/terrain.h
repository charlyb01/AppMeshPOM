#ifndef __TERRAIN__
#define __TERRAIN__

#include "node.h"

class Terrain : public Node
{
public:
	double Signed(const Vector&) const;

	static double Noise(const Vector&);
};

#endif
