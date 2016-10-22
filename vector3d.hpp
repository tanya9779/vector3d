#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <ostream>
#include <stdlib.h>

class vector3d {
    public:
    const static vector3d X;
    const static vector3d Y;
    const static vector3d Z;
    const static vector3d ZERO;
    

    float x;
    float y;
    float z;      

    // конструкторы 
    vector3d() : x(0), y(0), z(0) {};
    vector3d(float xx,float yy,float zz): x(xx), y(yy), z(zz) {};
    vector3d(const vector3d &a) : x(a.x), y(a.y), z(a.z) {};
    

    
    vector3d operator+(const vector3d &a) const;
    vector3d operator-() const;// унарный -
    vector3d operator-(const vector3d &a) const;
    float operator*(vector3d &a); // скалярное умножение
    vector3d operator^(const vector3d &a) const; // векторное умножение
    friend vector3d operator*(float i, vector3d &a);
    friend vector3d operator*(vector3d &a, float i);
    
    bool operator==(const vector3d &a) const;
    bool operator!=(const vector3d &a) const;
   
    float length();
    void normalize();

};



#endif
