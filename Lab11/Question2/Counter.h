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
    void* operator new(std::size_t sz){
        std::cout << "New\n";
        void* mem = std::malloc(sz);
        return mem;
    }
    void operator delete(void* mem){
        std::cout << "Delete\n";
        std::free(mem);
    }
};
#endif
