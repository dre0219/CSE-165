#include <string>
#include <iostream>
#include <fstream>
#include<sstream>
#include <cmath>
using namespace std;
//Question 4
int main(int argc, const char * argv[]) {
    int P = 0;
    cout<<"Enter a number to print its value in hexadecimal and binary format. \n";
    cin>>P;
    int arr[32];

    while(P != -1){
      cout<<hex<<P<<"\n";
      int temp = P;
      for(int i = 0; i<32; i++){
        temp = P%2;
        arr[i]=temp;
        P = P/2;
      }
      for(int x = 31; x>=0; x--){
        cout<<arr[x];
      }
      cout<<"\n";
      
      cin >> P;
    }
}