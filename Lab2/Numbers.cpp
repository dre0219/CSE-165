#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;
// Question 1 
int main(int argc, const char * argv[]) {
    int P = 0;
    cout<<"Enter a number to see if its odd or even. \n";
    cin>>P;
    if(P >0){
        cout <<"The number is Positive \n";
    }
    
        else{
            cout <<"The number is Negative \n";
        }
    if(P%2 == 0){
        cout<<"and it is even. \n";
    }
        else{
            cout<<"and it is odd. \n";
        }
    //Question 2
    cin>>P;
    while(P != 0){
    if(P >0){
        cout <<"The number is Positive \n";
    }
        else{
            cout <<"The number is Negative \n";
        }
    if(P%2 == 0){
        cout<<"and it is even. \n";
    }
         else{
            cout<<"and it is odd. \n";
        }
    cin >>P;
    }
}