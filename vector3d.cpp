#include "vector3d.hpp"

#include <cmath>

const vector3d vector3d::X = vector3d(1, 0, 0);
const vector3d vector3d::Y = vector3d(0, 1, 0);
const vector3d vector3d::Z = vector3d(0, 0, 1);
const vector3d vector3d::ZERO = vector3d(0,0,0);



        vector3d vector3d::operator+(const vector3d &a) const {
            return vector3d(x+a.x, y+a.y, z+a.z);
        }
        // унарный минус
        vector3d vector3d::operator-() const {
            return vector3d(-x, -y, -z);
        }

        
        vector3d vector3d::operator-(const vector3d &a)const {
            return vector3d(x-a.x, y-a.y, z-a.z);
        }
        // скалярное умножение
        float vector3d::operator*(vector3d &a) {
            return x*a.x + y*a.y + z*a.z;
        }
        // умножение числа на вектор-friend operator
        vector3d operator*(float i, vector3d &a) {
            return vector3d(i*a.x, i*a.y, i*a.z);
        }
        // умножение вектора на число
        vector3d operator*(vector3d &a, float i) {
            return vector3d(i*a.x, i*a.y, i*a.z);
        }
        // векторное умножение
        vector3d vector3d::operator^(const vector3d &a) const {
            return vector3d(y*a.z-z*a.y,-(x*a.z-z*a.x), x*a.y-y*a.x);         
        }
        
        bool vector3d::operator==(const vector3d &a) const { 
             return ( x==a.x && y==a.y && z==a.z );
        }
        
        bool vector3d::operator!=(const vector3d &a) const { 
             return ( x!=a.x || y!=a.y || z!=a.z ); 
        }

        // длина
        float vector3d::length() { return sqrt((x*x)+(y*y)+(z*z)); }
        
	// нормирование 
        void vector3d::normalize() {
                 float _len = 1/length();  
                 x=x*_len;
                 y=y*_len;
                 z=z*_len; 
        }
        
        

