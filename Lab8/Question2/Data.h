#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <vector>
#include <algorithm>

class Data{
public:
    Data(){}
    void add(int num){ this->storage.push_back(num); }

    void print(){
    for(const auto& num : storage){ std::cout << num << ' '; } std::cout << '\n';}
        
    void sort(){ 
    std::sort(this->storage.begin(), this->storage.end()); }
private:
    std::vector<int> storage;
};
#endif