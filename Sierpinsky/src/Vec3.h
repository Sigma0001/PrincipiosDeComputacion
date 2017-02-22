#pragma once




class Vec3
{
public:
	float x, y, z;
	Vec3(const float &x, const float &y, const float &z);

	Vec3();

//	Vec3 & operator+ (const Vec3 & rh);

	Vec3 midpoint(const Vec3& p0, const Vec3& p1);

};