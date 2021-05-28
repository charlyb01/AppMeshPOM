#ifndef __TERRAIN__
#define __TERRAIN__

#include "node.h"

/**
* @class Terrain Include/terrain.h
* @brief Primitive for a terrain SDF
* 
* This primitive creates a terrain from sum of Perlin noise
*/
class Terrain : public Node
{
public:
	double Signed(const Vector&) const;

	/**
	* @brief Perlin noise function
	*/
	static double Noise(const Vector&);
};

#endif
