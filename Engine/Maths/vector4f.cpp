/*
LeoTamminen
Created 04/02/2019
*/

#include "vector4f.hpp"

float & maths::vector4f::operator[](int index) { return values [index]; }
const float & maths::vector4f::operator[](int index) const { return values [index]; }

float maths::dot(const maths::vector4f &lhs, const maths::vector4f &rhs)
{
    return lhs[0] * rhs[0] + lhs[1] * rhs[1] + lhs[2] * rhs[2] + lhs[3] * rhs[3];
}
