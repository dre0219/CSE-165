#include <iostream>
//Question 6
int findBinary(int Number){
    std::string x = "";
    while(Number != 0){
        int P = Number % 2;
        x = std::to_string(P) + x;
        Number = Number / 2;
    }
    return std::stoi(x);
}
//int getBit(int n, int index)
int getBit(int Number, int index){
    return Number >> index & 1; //Shift number to the rigfht by index, AND it with 1
}
//int setBit(int n, int index)
int setBit(int Number, int index){
    return findBinary(Number | 1 << index); //bitwise OR operator
}
//int clearBit(int n, int index)
int clearBit(int Number, int index){
    return findBinary(Number &~(1 << index)); //invert the bit string with the bitwise NOT operator (~), then AND it.
}

int main(){
    int PushinP, index;
    std::cout << "Enter a number: " << '\n';
    std::cin >> PushinP;
    std::cout << "The number in Binary form is: " << findBinary(PushinP) << '\n';
    std::cout << "Enter an index to get, set, and clear a bit: " << '\n';
    std::cin >> index;
    std::cout << "Getting bit at index " << index << ": " << getBit(PushinP, index) << '\n';
    std::cout << "Setting bit at index " << index << ": " << setBit(PushinP, index) << '\n';
    std::cout << "Claring bit at index " << index << ": " << clearBit(PushinP, index) << '\n';
    return 0;
}