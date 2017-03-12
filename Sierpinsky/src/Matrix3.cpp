#include "Matrix3.h"
#include <math.h>


Matrix3::Matrix3() 
{
}

Matrix3::Matrix3(const float val[3][3])
{

}


Vec3& Matrix3::operator* (const Vec3& v)
{	
	return Vec3	(	 m[0][0] * v.x + m[0][1] * v.y + m[0][2] * v.z, 
					 m[1][0] * v.x + m[1][1] * v.y + m[1][2] * v.z, 
					 m[2][0] * v.x + m[2][1] * v.y + m[2][2] * v.z );


}

Vec3 & Matrix3::rotate( Vec3& v,const float angle)
{
	Vec3 MatR;

	MatR.x = ((cos(angle)*v.x) + (sin(angle)*v.y) + (0.0f)*v.z);
	MatR.y = ((-sin(angle)*v.x) + (cos(angle)*v.y) + (0.0f)*v.z);
	MatR.z = (((0.0f)*v.x) + ((0.0f)*v.y) + (0.0f)*v.z);

	return MatR;
}

Matrix3 Matrix3::Identity()
{
	Matrix3 t;
	t.m[0][0] = t.m[1][1] = t.m[2][2] = 1.0f;
	t.m[0][1] = t.m[0][2] = t.m[1][0] = t.m[1][2] = t.m[2][0] = t.m[2][1] = 0.0f;

	return t;
}

