#ifndef COUNTER_H
#define COUNTER_H
#include <iostream>
class Counter{
public:
    static int count;
    int ID;
    Counter() :ID(count++){
        std::cout << this->ID << " Created\n";
    }
    ~Counter(){
        std::cout << this->ID << " Destroyed\n";
    }
};
#endif