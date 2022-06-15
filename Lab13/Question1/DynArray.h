#ifndef DYN_ARRAY_H
#define DYN_ARRAY_H
#include <iostream>
#include <vector>
template <typename A>
class DynArray{
private:
    std::vector<A> arr;
public:
    DynArray(){}
    void add(A num){
        this->arr.push_back(num);
    }
    A operator[](int index){
        return this->arr[index];
    }
    int size(){
        return this->arr.size();
    }
};
#endif