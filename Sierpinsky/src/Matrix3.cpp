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

Matrix3 Matrix3::rotate(const float a)
{
	float angle = a * 180.0f / 3.14159265359f;
	Matrix3 t;

	t.m[0][0] = cos(angle); t.m[0][1] = -sin(angle);
	t.m[1][0] = sin(angle); t.m[1][1] = cos(angle);

	t.m[0][2] = t.m[1][2] = t.m[2][0] = t.m[2][1] = 0.0f;

	t.m[2][2] = 1.0;

	return t;
}


Matrix3 Matrix3::Identity()
{
	Matrix3 t;
	t.m[0][0] = t.m[1][1] = t.m[2][2] = 1.0f;
	t.m[0][1] = t.m[0][2] = t.m[1][0] = t.m[1][2] = t.m[2][0] = t.m[2][1] = 0.0f;

	return t;
}

Matrix3 Matrix3::Translate(const Vec3 pos)
{
	Matrix3 t;

	t.m[0][0] = 0.0f;
	t.m[0][1] = 0.0f; 
	t.m[0][2] = pos.x;
	t.m[1][0] = 0.0f;
	t.m[1][1] = 0.0f;
	t.m[1][2] = pos.y;
	t.m[2][0] = 0.0f;
	t.m[2][1] = 0.0f;
	t.m[2][2] = pos.z;

	return t;
}

