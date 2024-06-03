#pragma once

namespace Ess 
{

/**
 * @brief 2D Vector class. 
 * All methods DO NOT modify the values of this class and instead return
 * a resultant Vector3. 
*/
class Vector3 
{
public: 
    Vector3() = default;
    ~Vector3() = default;

    /**
     * @brief Constructor wich takes in 2 floats and assigns x and y respectively.
    */
    Vector3(float x, float y, float z);

    /**
     * @brief Constructor which takes in single float and assings both x and y with this value.
    */ 
    Vector3(float xyz);

    /**
     * @param other Vector3 to add with.
     * @return The resultant Vector3.
    */ 
    Vector3 operator+(const Vector3& other) const;

    /**
     * @param other Vector3 to subtract by.
     * @return The resultant Vector3.
    */
    Vector3 operator-(const Vector3& other) const;

    /**
     * @param other Vector3 to multiply by.
     * @return The resultant Vector3.
    */
    Vector3 operator*(const Vector3& other) const;

    /**
     * @param other Vector3 to divide by.
     * @return The resultant Vector3.
    */
    Vector3 operator/(const Vector3& other) const;

    /**
     * @brief Peforms a 2 dimensional dot product between two vectors.
     * The dot product between two Vector3 returns the cosine of the angle between them.
     * @param other Vector3 to peform a dot product with.
     * @return The resultant float.
    */
    float Dot(const Vector3& other) const;

    /**
     * @brief Peforms a 2 dimensional cross product between two vectors.
     * The cross product between Vector3 doesn't really have a sensible geometric 
     * representation, unlike the cross product between two Vector3, but rather returns the
     * magnitude of the vector that would result from the cross product between those vectors
     * being extended into 3D space.
     * @param other Vector3 to peform a dot product with.
     * @return The resultant float.
    */
    Vector3 Cross(const Vector3& other) const;

    /**
     * @brief Calculate the magnitude of this Vector3 (commonly referred to as the length)
     * @return The resultant float.
    */
    float Magnitude() const;

    /**
     * @brief Prints the values of this instance to the terminal.
    */
    void Print() const;

    float x{0.0f};
    float y{0.0f};
    float z{0.0f};
};
}