#include "Matrix4.hpp"
#include <iostream>
#include <iomanip>

namespace Ess 
{

Matrix4::Matrix4(float initializer) 
{
    for(int i = 0; i < 4; i++) 
    {
        for(int j = 0; j < 4; j++) 
        {
            if(j == i) m[i][j] = initializer;
            else m[i][j] = 0.0f;
        }
    }
}

Matrix4 Matrix4::operator*(const Matrix4& other) const 
{
    Matrix4 result;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            result.m[i][j] = 0;
            for (int k = 0; k < 4; ++k) {
                result.m[i][j] += m[i][k] * other.m[k][j];
            }
        }
    }
    return result;
}


Vector4 Matrix4::operator*(const Vector4& other) const 
{
    Vector4 result;
    result.x = m[0][0] * other.x + m[0][1] * other.y + m[0][2] * other.z + m[0][3] * other.w;
    result.y = m[1][0] * other.x + m[1][1] * other.y + m[1][2] * other.z + m[1][3] * other.w;
    result.z = m[2][0] * other.x + m[2][1] * other.y + m[2][2] * other.z + m[2][3] * other.w;
    result.w = m[3][0] * other.x + m[3][1] * other.y + m[3][2] * other.z + m[3][3] * other.w;
    return result;
}

void Matrix4::SetIdentity() 
{
    for(int i = 0; i < 4; i++) 
    {
        for(int j = 0; j < 4; j++) 
        {
            if(j == 1) m[i][j] = 1.0f;
            else m[i][j] = 0.0f;
        }
    }
} 

void Matrix4::Transpose() 
{
    for(int i = 0; i < 4; i++) 
    {
        for(int j = 0; j < 4; j++) 
        {
            m[i][j] = m[j][i];
        }
    }
}

Matrix4 Matrix4::Ortho(float left, float right, float bottom, float top, float near, float far) 
{
    Matrix4 result;

    result.m[0][0] = 2.0f / (right - left);
    result.m[0][3] = -(right + left) / (right - left);
    
    result.m[1][1] = 2.0f / (top - bottom);
    result.m[1][3] = -(top + bottom) / (top - bottom);

    result.m[2][2] = -2.0f / (far - near);
    result.m[2][3] = -(far + near) / (far - near);

    result.m[3][3] = 1.0f;

    return result;
}

void Matrix4::Print() const 
{
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << std::setw(8) << std::setprecision(4) << std::fixed << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

}