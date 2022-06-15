#ifndef OBJ_H
#define OBJ_H
#include "Shared.h"
#include <iostream>
class Obj : public Shared {
public:
    std::string n;
    Obj(std::string name){
        this->n = name;
        std::cout << "New " << this->n << '\n';
    }
    ~Obj(){
        std::cout << "Delete " << this->n << '\n';
    }
};
#endif