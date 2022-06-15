#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;
//Question 3
bool primeNumber(int P);
int main(int argc, const char * argv[]) {
int Number = 0;
cout<<"Enter a number to find its prime numbers beneath it. \n";
cin>>Number;

    for(int i = 2; i<Number; i++){
        if(i == 2){
            cout <<i << "\n";
        }
        else{
            if(primeNumber(i) == true){
                cout<<i<<"\n";
            }
        }
    }

}
bool primeNumber(int P){
    for(int z = 2; z<P; z++){
        if(P%z == 0){
            return false;
        }
    }
    return true;
}