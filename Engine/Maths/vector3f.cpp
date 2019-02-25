/*
LeoTamminen
Created 31/01/2019
*/

#include "vector3f.hpp"
#include "OStreamOperators.hpp"
#include "Basic.hpp"

using namespace maths;

const vector3f vector3f::down = vector3f(0.0f, 0.0f, -1.0f);
const vector3f vector3f::up = vector3f(0.0f, 0.0f, 1.0f);
const vector3f vector3f::left = vector3f(-1.0f, 0.0f, 0.0f);
const vector3f vector3f::right = vector3f(1.0f, 0.0f, 0.0f);
const vector3f vector3f::back = vector3f(0.0f, -1.0f, 0.0f);
const vector3f vector3f::forward = vector3f(0.0f, 1.0f, 0.0f);

vector3f & vector3f::operator+=(const vector3f & rhs)
{
   x += rhs.x;
   y += rhs.y;
   z += rhs.z;

   return *this;
}

vector3f &vector3f::operator-=(const vector3f &rhs)
{
   x -= rhs.x;
   y -= rhs.y;
   z -= rhs.z;

   return *this;
}

vector3f vector3f::operator + (const vector3f &rhs) const
{
   vector3f lhs = *this;
   lhs += rhs;
   return lhs;
}

vector3f vector3f::operator-(const vector3f &rhs) const {
   vector3f lhs = *this;
   lhs -= rhs;
   return lhs;
}

vector3f & vector3f::operator*=(float f) {
   x *= f;
   y *= f;
   z *= f;

   return *this;
}

vector3f vector3f::operator* (float f) const {
    vector3f lhs = *this;
    lhs *= f;
    return lhs;
}


vector3f & vector3f::operator/= (float f) {
   x /= f;
   y /= f;
   z /= f;

   return *this;
}

vector3f vector3f::operator/(float f) const
{
    vector3f lhs = *this;
    lhs /= f;
    return lhs;
}

vector3f vector3f::operator-() const
{
    return *this * -1;
}

float maths::magnitude(const vector3f &v)
{
    return sqrt(v.x * v.x + v.y * v.y + v.z + v.z);
}

vector3f maths::cross(const vector3f &lhs, const vector3f &rhs)
{
    return vector3f(
        lhs.y * rhs.z - lhs.z * rhs.y,
        lhs.z * rhs.x - lhs.x * rhs.z,
        lhs.x * rhs.y - lhs.y * rhs.x
    );
}

vector3f maths::normalize(const vector3f & v)
{
    float length = magnitude(v);
    return v / length;
}

float maths::dot(const vector3f &lhs, const vector3f &rhs)
{
    return lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z;
}

float maths::sqrDistance(const vector3f & lhs, const vector3f & rhs)
{
    vector3f vec = lhs - rhs;
    return vec.x * vec.x + vec.y * vec.y + vec.z + vec.z;

}