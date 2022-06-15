#include <iostream>
#include <fstream>
#include <iostream>
#include <fstream>
#include <string>
#include "Stash.h"

int main(){
    Stash s;
    s.initialize(sizeof (double));
    std::string line;
    std::ifstream f("input.txt");
    while(std::getline(f, line)){
        double a = double(std::stod(line));
        s.add(&a);
    };
    for(int i = 0; i < s.count(); i++){
       std::cout << *(double*)s.fetch(i) << '\n';
    };
    s.cleanup();

    return 0;
};