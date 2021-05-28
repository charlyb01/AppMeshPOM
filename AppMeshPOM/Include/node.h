#ifndef __NODE__
#define __NODE__

#include "evector.h"

/**
* @class Node Include/node.h
* @brief Class representing a node from the constuction tree
* 
* A node is an abstract class used to represent a node from a tree of SDF. Every primitive and operator inherits from it.
*/
class Node
{
public:
	virtual ~Node() {}

	/**
	* @brief SDF of the node
	*/
	virtual double Signed(const Vector&) const = 0;
};

#endif
