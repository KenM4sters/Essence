#pragma once

namespace Ess 
{

/**
 * @brief 2D Vector class. 
 * All methods DO NOT modify the values of this class and instead return
 * a resultant Vector4. 
*/
class Vector4 
{
public: 
    Vector4() = default;
    ~Vector4() = default;

    /**
     * @brief Constructor wich takes in 2 floats and assigns x and y respectively.
    */
    Vector4(float x, float y, float z, float w);

    /**
     * @brief Constructor which takes in single float and assings both x and y with this value.
    */ 
    Vector4(float xyzw);

    /**
     * @param other Vector4 to add with.
     * @return The resultant Vector4.
    */ 
    Vector4 operator+(const Vector4& other) const;

    /**
     * @param other Vector4 to subtract by.
     * @return The resultant Vector4.
    */
    Vector4 operator-(const Vector4& other) const;

    /**
     * @param other Vector4 to multiply by.
     * @return The resultant Vector4.
    */
    Vector4 operator*(const Vector4& other) const;

    /**
     * @param other Vector4 to divide by.
     * @return The resultant Vector4.
    */
    Vector4 operator/(const Vector4& other) const;

    /**
     * @brief Peforms a 2 dimensional dot product between two vectors.
     * The dot product between two Vector4 returns the cosine of the angle between them.
     * @param other Vector4 to peform a dot product with.
     * @return The resultant float.
    */
    float Dot(const Vector4& other) const;

    /**
     * @brief Calculate the magnitude of this Vector4 (commonly referred to as the length)
     * @return The resultant float.
    */
    float Magnitude() const;

private:
    float x{0.0f};
    float y{0.0f};
    float z{0.0f};
    float w{0.0f};
};
}