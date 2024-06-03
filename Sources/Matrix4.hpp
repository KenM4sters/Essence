#pragma once
#include "Vector4.hpp"
namespace Ess 
{
class Matrix4 
{
public:
    Matrix4() = default;
    ~Matrix4() = default;

    /**
     * @brief Constructor to initalize this Matrix4 with the diagonals set to the parameter.
     * e:g 1.0f results in an identity matrix.
     * @param initializer value to initialize the Matrix4 diagonal with.
    */
    Matrix4(float initializer);
    
    /**
     * @param other Matrix4 to multiply by.
     * @return The resultant Matrix4.
    */
    Matrix4 operator*(const Matrix4& other) const;
    
    /**
     * @param other Vector4 to multiply by.
     * @return The resultant Vector4.
    */
    Vector4 operator*(const Vector4& other) const;
    
    /**
     * @brief Sets this instance to the identity matrix.
    */
    void SetIdentity(); 

    /**
     * @brief swaps the values of each column and row of this instance.
    */
   void Transpose();

    /**
     * @brief Computes an orthrophic projection matrix.
     * @param left the furthest left point of the viewing plane
     * @param right the furthest right point of the viewing plane
     * @param bottom the furthest bottom point of the viewing plane
     * @param top the furthest top point of the viewing plane
     * @param near the nearest point to the camera.
     * @param far the furthest point to the camera.
    */
    static Matrix4 Ortho(float left, float right, float bottom, float top, float near, float far);

    /**
     * @brief Prints the values of this instance to the terminal.
    */
    void Print() const;

    float m[4][4]; 
};
}