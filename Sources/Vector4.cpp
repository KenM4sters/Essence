#include <iostream>
#include "Vector4.hpp"

namespace Ess 
{

Vector4::Vector4(float x, float y, float z, float w) 
{
    this->x = x;
    this->y = y;
    this->z = z;
    this->w = w;
}

Vector4::Vector4(float xyzw) 
{
    x = xyzw;
    y = xyzw;
    z = xyzw;
    w = xyzw;
}

Vector4 Vector4::operator+(const Vector4& other) const
{
    return Vector4(x + other.x, y + other.y, z + other.z, w + other.w);
}

Vector4 Vector4::operator-(const Vector4& other) const 
{
    return Vector4(x - other.x, y - other.y, z - other.z, w - other.w);
}

Vector4 Vector4::operator*(const Vector4& other) const 
{
    return Vector4(x * other.x, y * other.y, z * other.z, w * other.w);
}

Vector4 Vector4::operator/(const Vector4& other) const
{
    return Vector4(x / other.x, y / other.y, z / other.z, w / other.w);

}

float Vector4::Dot(const Vector4& other) const 
{   
    return (x * other.x) + (y * other.y) + (z * other.z) + (w + other.w);
}

float Vector4::Magnitude() const 
{
    return std::sqrt((x*x) + (y*y) + (z*z) + (w*w));
}
}