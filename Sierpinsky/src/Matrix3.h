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

	static Matrix3 rotate(const float a);
	

	static Matrix3 Identity();

	static Matrix3 Translate(const Vec3 pos);
};
