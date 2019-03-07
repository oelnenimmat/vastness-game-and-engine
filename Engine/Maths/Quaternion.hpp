/*
Shophorn Games
Leo Tamminen
Created 03/03/2019
*/

#pragma once

// #include "vector3f.hpp"

namespace maths
{
    struct vector3f;
    struct matrix4f;

    struct quaternion
    {
        float x, y, z, w;

        static const quaternion identity;

        quaternion (float x, float y, float z, float w);
        quaternion(vector3f xyz, float w);

        vector3f    operator * (vector3f rhs);
        quaternion  operator * (quaternion rhs);

    private:
        vector3f xyz();
    };

    inline const quaternion quaternion::identity = quaternion{0,0,0,1};


    quaternion lookRotation(vector3f forward, vector3f up);
    quaternion axisAngle(vector3f axis, float angle);
    quaternion eulerToQuaternion(vector3f euler);
    
    quaternion inverse(quaternion q);

    matrix4f toRotationMatrix(quaternion q);
}