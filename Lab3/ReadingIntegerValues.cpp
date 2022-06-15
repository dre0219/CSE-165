#include <iostream>
#include <vector>
#include <cmath>

int main(){
    int number, sum = 0;
    std::cout<<"Enter a list of number inputs for a Sum and list. \n";
    std::cin >> number;
    std::vector<int> vector;
    while(number != 0){
        if(number > 0){
            vector.push_back(number);}
        else{
            for(int i = 0; i < vector.size(); i++){
                if(abs(number) == vector[i]){
                    vector.erase(vector.begin() + i);}
            }
        }
        std::cin >> number;}
    for(const auto &i: vector){
        std::cout << i;
        sum += i;}
    std::cout << "\n The Sum of the inputs is: " << sum << '\n';
    return 0;
}