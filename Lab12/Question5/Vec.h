#ifndef LA12_Vec_h
#define LA12_Vec_h
#include "Mat.h"
using namespace std;
class Vec {
public:
    float a;
    float b;
    Vec(){
        a = 0;
        b = 0;
    }
    
        Vec (float a, float b){
            this->a = a;
            this->b = b;
         }
    
            Vec operator + (const Vec & v) const{
                return Vec(a + v.a, b + v.b);
            }

};

ostream& operator<< (ostream& o, const Vec & v){
    o << "(" << v.a << ", " << v.b << ")";
    return o;
}
#endif