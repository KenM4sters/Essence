#include <Matrix4.hpp>
#include <Vector2.hpp>
#include <Vector3.hpp>
#include <Vector4.hpp>

#include <iostream>

int main(int argc, char** argv) 
{
    Ess::Matrix4 mat4(1.0f);
    Ess::Vector2 vec2(5.0f);
    Ess::Vector3 vec3(2.0f);
    Ess::Vector4 vec4(400, 400, 0.0, 1.0);

    mat4.Print();
    vec2.Print();
    vec3.Print();
    vec4.Print();

    Ess::Matrix4 ortho = Ess::Matrix4::Ortho(0, 600, 800, 0, -1, 1);
    Ess::Vector4 clipPos = ortho * vec4; 

    clipPos.Print();
}