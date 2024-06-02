#include <iostream>
#include "Vector2.hpp"

namespace Ess 
{

Vector2::Vector2(float x, float y) 
{
    this->x = x;
    this->y = y;
}

Vector2::Vector2(float xy) 
{
    x = xy;
    y = xy;
}

Vector2 Vector2::operator+(const Vector2& other) const
{
    return Vector2(x + other.x, y + other.y);
}

Vector2 Vector2::operator-(const Vector2& other) const 
{
    return Vector2(x - other.x, y - other.y);
}

Vector2 Vector2::operator*(const Vector2& other) const 
{
    return Vector2(x * other.x, y * other.y);

}

Vector2 Vector2::operator/(const Vector2& other) const
{
    return Vector2(x / other.x, y / other.y);

}

float Vector2::Dot(const Vector2& other) const 
{   
    return (x * other.x) + (y * other.y);
}

float Vector2::Cross(const Vector2& other) const 
{
    return x * other.y - y * other.x;
}

float Vector2::Magnitude() const 
{
    return std::sqrt((x*x) + (y*y));
}
}