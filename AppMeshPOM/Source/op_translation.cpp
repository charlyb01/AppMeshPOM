#include "op_translation.h"
#include "mat.h"

double OpTranslation::Signed(const Vector& vec) const
{
	return node->Signed(Mat4::Translation(transformation).inverse()(vec));
}
