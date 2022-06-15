#pragma once
#include "ADT.h"
#include<iostream>
using namespace std;

class Derived : public ADT {
    public:
    void doSomething (){
        cout<<"I did something \n";
    }

    void doSomethingElse(){
        cout<<"I did something else \n";
    }
    void dontDoThis(){}
    Derived(){}
};
