#include <string>
#include <iostream>
#include <fstream>
#include<sstream>
#include <cmath>
using namespace std;
//Question 5
int main(int argc, const char * argv[]) {
    int P = 0;
    int Gunna = 0;
    cout << "Enter the first number: \n";
    cin >> P;
    cout << "Enter the second number: \n";
    cin >> Gunna;

    int *ptrP = &P;
    int*ptrGunna = &Gunna;
    int Adding, Subtraction, Multiplying, Dividing;
    Adding = *ptrP + *ptrGunna;
    Subtraction = *ptrP - *ptrGunna;
    Multiplying = *ptrP * *ptrGunna;
    Dividing = *ptrP / *ptrGunna;

    cout<<"Adding the numbers: "<<Adding<<"\n";
    cout<<"Subtracting the numbers: "<<Subtraction<<"\n";
    cout<<"Multiplying the numbers: "<<Multiplying<<"\n";
    cout<<"Dividing the numbers: "<<Dividing<<"\n";
}