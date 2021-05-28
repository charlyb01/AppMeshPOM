#ifndef __TORUS__
#define __TORUS__

#include "node.h"

/**
* @class Torus Include/torus.h
* @brief Primitive for a torus SDF
*/
class Torus : public Node
{
protected:
	Vector2 radiuses;	///< Radiuses from circles of the torus and its width

public:
	Torus() : Torus(Vector2(1.0, 0.5)) {}
	Torus(const Vector2& r) : radiuses(r) {}

	double Signed(const Vector&) const;
};

#endif
