#ifndef __TERRAIN__
#define __TERRAIN__

#include "node.h"

class Terrain : public Node
{
public:
	double Signed(const Vector& vec) const;

	static double Noise(const Vector& vec);
};

#endif
