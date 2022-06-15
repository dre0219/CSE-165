#ifndef COUNTER_HPP
#define COUNTER_HPP
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
    void* operator new[](std::size_t sz){   
        std::cout << "New " << (sz / sizeof(Counter)) - 2  << " starting at " << count << '\n';
        void* mem = std::malloc(sz);
        return mem;
    }
    void operator delete[](void* mem){
        std::cout << "Delete counters\n";
        std::free(mem);
    }
};
#endif
