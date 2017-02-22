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

/*	Vec3 & Vec3::operator+(const Vec3 & rh)
	{
		// TODO: insertar una instrucción return aquí
	
	}*/

	Vec3 Vec3::midpoint(const Vec3 & p0, const Vec3 & p1)
	{
		return Vec3();
			(p0.x + p1.x) * (0.2f);
			(p0.y + p1.y) * (0.2f);
			(p0.z + p1.z) * (0.2f);
			
			
	}

	