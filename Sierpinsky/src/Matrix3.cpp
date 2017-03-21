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
	float angle = a * 3.14159265359f / 180.0f  ;
	Matrix3 t;
	
	t.m[0][0] = cos(angle); t.m[0][1] = -sin(angle); t.m[0][2] = 0.0f;
	t.m[1][0] = sin(angle); t.m[1][1] = cos(angle);  t.m[1][2] = 0.0f;
	t.m[2][0] = 0.0f;       t.m[2][1] = 0.0f;		 t.m[2][2] = 1.0;


	return t;
}
Matrix3 Matrix3::mult(const Matrix3 & v, const Matrix3 & p)
{
	Matrix3 t;
	/*
	t.m[0][0] = (v.m[0][0] * p.m[0][0]) + (v.m[0][1] * p.m[1][0]) + (v.m[0][2] * p.m[2][0]);
	t.m[0][1] = (v.m[0][0] * p.m[0][1]) + (v.m[0][1] * p.m[1][1]) + (v.m[0][2] * p.m[2][1]);
	t.m[0][2] = (v.m[0][0] * p.m[0][2]) + (v.m[0][1] * p.m[1][2]) + (v.m[0][2] * p.m[2][2]);
										 							
	t.m[1][0] = (v.m[1][0] * p.m[0][0]) + (v.m[1][1] * p.m[1][0]) + (v.m[1][2] * p.m[2][0]);
	t.m[1][1] = (v.m[1][0] * p.m[0][1]) + (v.m[1][1] * p.m[1][1]) + (v.m[1][2] * p.m[2][1]);
	t.m[1][2] = (v.m[1][0] * p.m[0][2]) + (v.m[1][1] * p.m[1][2]) + (v.m[1][2] * p.m[2][2]);
										   							
	t.m[2][0] = (v.m[2][0] * p.m[0][0]) + (v.m[2][1] * p.m[1][0]) + (v.m[2][2] * p.m[2][0]);
	t.m[2][1] = (v.m[2][0] * p.m[0][1]) + (v.m[2][1] * p.m[1][1]) + (v.m[2][2] * p.m[2][1]);
	t.m[2][2] = (v.m[2][0] * p.m[0][2]) + (v.m[2][1] * p.m[1][2]) + (v.m[2][2] * p.m[2][2]);
	*/

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{

			t.m[i][j] = 0;
			for (int k = 0; k < 2; k++)
			{
				t.m[i][j] += v.m[i][k] * p.m[k][j];
			}
		}
	}


	return t;
}
Matrix3 Matrix3::Translate( Vec3 pos)
{
	Matrix3 t;
	t.m[0][0] = 1.0f; t.m[0][1] = 0.0f; t.m[0][2] = pos.x;
	t.m[1][0] = 0.0f; t.m[1][1] = 1.0f; t.m[1][2] = pos.y;
	t.m[2][0] = 0.0f; t.m[2][1] = 0.0f; t.m[2][2] = pos.z;


	return t;
}

Vec3 Matrix3::VecMult(const Matrix3 & v, const Vec3 & p)
{
	Vec3 t;
		
		t.x = (v.m[0][0] * p.x) + (v.m[0][1] * p.y) + (v.m[0][2] * p.z);
		t.y = (v.m[1][0] * p.x) + (v.m[1][1] * p.y) + (v.m[1][2] * p.z);
		t.z = (v.m[2][0] * p.x) + (v.m[2][1] * p.y) + (v.m[2][2] * p.z);

    return t;
}

Matrix3 Matrix3::Identity()
{
	Matrix3 t;
	t.m[0][0] = t.m[1][1] = t.m[2][2] = 1.0f;
	t.m[0][1] = t.m[0][2] = t.m[1][0] = t.m[1][2] = t.m[2][0] = t.m[2][1] = 0.0f;

	return t;
}


