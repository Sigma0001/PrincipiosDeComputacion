#pragma once
#include "Vec3.h"
#include <vector>

class Matrix3
{
public:
	float m[3][3];

	Matrix3();
	Matrix3(const float val[3][3]);
	Vec3& operator* (const Vec3& v);

	//Matrix3& operator* (const Matrix3& v);

	static Matrix3 rotate(const float a);
	
	static Matrix3 mult(const Matrix3& v, const Matrix3& p);

	static Matrix3 Identity();

	static Matrix3 Translate( Vec3 pos);

	static Vec3 VecMult(const Matrix3& v, const Vec3& p);

};
