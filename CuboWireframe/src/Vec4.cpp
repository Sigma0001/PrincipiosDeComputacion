#include "Vec4.h"

Vec4::Vec4(const float &x, const float &y, const float &z, const float &w):
	x(x), y(y), z(z), w(w)
{}

Vec4::Vec4() :
	x(0), y(0), z(0), w(w)
{}

/*Vec3::Vec3(const float & x, const float & y, const float & z)
{
}*/

Vec4 & Vec4::operator+(const Vec4 & v)
{
	return Vec4(x + v.x, y + v.y, z + v.z, w + v.w);

}


