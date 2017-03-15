#include "Vec3.h"

Vec3::Vec3(const float &x, const float &y, const float &z):
	x(x), y(y), z(z)
	{}

Vec3::Vec3() :
	x(0), y(0), z(0)
{}

	/*Vec3::Vec3(const float & x, const float & y, const float & z)
	{
	}*/

	Vec3 & Vec3::operator+(const Vec3 & v)
	{
		return Vec3(x+v.x, y+v.y, z+v.z);
	
	}

	Vec3 Vec3::midpoint(const Vec3 & p0, const Vec3 & p1)
	{
		Vec3 p2;
			p2.x =(p0.x + p1.x) / (2.0f);
			p2.y = (p0.y + p1.y) / (2.0f);
			p2.z = (p0.z + p1.z) / (2.0f);
			return p2;
	}

	