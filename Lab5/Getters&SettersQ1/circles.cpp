#include <iostream>
#include "Circle.h"
using namespace std;

int main(int argc, const char * argv[])
{
    Circle myCircle;
    
    cout << "Center:\t(" << myCircle.getX() << ", " << myCircle.getY() << ")" << endl;
    cout << "Radius:\t" << myCircle.getZ() << endl;
    cout << "Area:\t" << myCircle.area << endl;
    
    myCircle.setX(1);
    myCircle.setY(2);
    myCircle.setZ(3);
    
    cout << endl;
    
    cout << "Center:\t(" << myCircle.getX() << ", " << myCircle.getY() << ")" << endl;
    cout << "Radius:\t" << myCircle.getZ() << endl;
    
    return 0;
}