#include <iostream>
#include "Object.h"
int main() {
    
    Object *n = new Number(4);
    Object *coord = new Coord3D(1, 2, 3);

    Object *res1 = coord->multiply(n);
    Object *res2 = n->multiply(coord);
    Object *res3 = coord->multiply(coord);
    Object *res4 = n->multiply(n);

    res1->print();
    res2->print();
    res3->print();
    res4->print();
}