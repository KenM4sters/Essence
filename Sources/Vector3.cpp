#include "Vector3.hpp"
#include <iostream>
#include <iomanip>

namespace Ess 
{

Vector3::Vector3(float x, float y, float z) 
{
    this->x = x;
    this->y = y;
    this->z = z;
}

Vector3::Vector3(float xyz) 
{
    x = xyz;
    y = xyz;
    z = xyz;
}

Vector3 Vector3::operator+(const Vector3& other) const
{
    return Vector3(x + other.x, y + other.y, z + other.z);
}

Vector3 Vector3::operator-(const Vector3& other) const 
{
    return Vector3(x - other.x, y - other.y, z - other.z);
}

Vector3 Vector3::operator*(const Vector3& other) const 
{
    return Vector3(x * other.x, y * other.y, z * other.z);

}

Vector3 Vector3::operator/(const Vector3& other) const
{
    return Vector3(x / other.x, y / other.y, z / other.z);

}

float Vector3::Dot(const Vector3& other) const 
{   
    return (x * other.x) + (y * other.y) + (z * other.z);
}

Vector3 Vector3::Cross(const Vector3& other) const 
{
    return {
        y * other.z - z * other.y,
        z * other.x - x * other.z,
        x * other.y - y * other.x
    };
}

float Vector3::Magnitude() const 
{
    return std::sqrt((x*x) + (y*y) + (z*z));
}

void Vector3::Print() const 
{
    std::cout << "(" << std::setw(8) << std::setprecision(4) << std::fixed << x << ", "
        << std::setw(8) << std::setprecision(4) << std::fixed << y << ", "
        << std::setw(8) << std::setprecision(4) << std::fixed << z << ")" << std::endl;
}
}