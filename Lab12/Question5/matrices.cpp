#include <iostream>
#include "Mat.h"
#include "Vec.h"
using namespace std;

int main(int argc, const char * argv[]){
    Mat a ( Mat::Identity );
    Mat b ( 1.0f, 2.0f, 1.0f, 4.0f );
    Vec v = (((a + b) - (a*4)) + a*b) * Vec(1, 2);
    cout << v << endl;
    return 0;
}