#ifndef MAT_H
#define MAT_H
#include <ios>
#include "Vec.h"

class Mat{
public:
    static Mat Identity;
    float tl, tr, bl, br;
    Mat(float tl, float tr, float bl, float br){
        this->tl = tl;
        this->tr = tr;
        this->bl = bl;
        this->br = br;
    }
    Mat (const Mat& m){
        this->tl = m.tl;
        this->tr = m.tr;
        this->bl = m.bl;
        this->br = m.br;
    }
    Mat operator+(const Mat& m) const{
        Mat matrix = Mat(this->tl + m.tl, this->tr + m.tr, this->bl + m.bl, this->br + m.br);
        return matrix;
    }
    Mat operator-(const Mat& m) const{
        Mat matrix = Mat(this->tl - m.tl, this->tr - m.tr, this->bl - m.bl, this->br - m.br);
        return matrix;
    }
    Mat operator*(const Mat& m) const{
        Mat matrix = Mat((this->tl * m.tl) + (this->tr * m.bl), (this->tl * m.tr) + (this->tr * m.br), (this->bl * m.tl) + (this->br * m.bl), (this->bl * m.tr) + (this->br * m.br));
        return matrix;
    }
    Mat operator*(const int& x) const{
        Mat matrix = Mat(this->tl * x, this->tr * x, this->bl * x, this->br * x);
        return matrix;
    }
    Vec operator*(const Vec v){
        Vec vector = Vec((this->tl * v.a) + (this->tr * v.a), (this->bl * v.b) + (this->br * v.b));
        return vector;
    }
};

Mat operator*(const int& x, Mat& m){ //A free function
    return m * x;
}
Mat Mat::Identity = Mat(1, 0, 0, 1);
#endif
