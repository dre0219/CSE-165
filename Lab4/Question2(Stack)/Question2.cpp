#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Stack.h"

int main(){
    Stack s;
    s.initializing();
    std::string line;
    std::vector<double> list;
    std::ifstream f("input.txt");
    while(std::getline(f, line)){
        double a = std::stod(line);
        s.push(new double(a));
    }
    Stack temp = s;
    while(s.head != NULL){
        std::cout << *(double*)s.head->data << '\n';
        s.head = s.head->next;
    }
    s.head = temp.head;
    while(s.pop()){}
    s.cleanup();

    return 0;
}
