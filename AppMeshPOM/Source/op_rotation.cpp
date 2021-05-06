#include "op_rotation.h"
#include "mat.h"

double OpRotation::Signed(const Vector& vec) const
{
	return node->Signed(
		Mat4::RotationX(transformation[0]).inverse()
			(Mat4::RotationY(transformation[1]).inverse()
				(Mat4::RotationZ(transformation[2]).inverse()
					(vec))));
}
