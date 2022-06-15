#include <iostream>
#include "Fib.h"
using namespace std;
int Fib::last = 1;
int Fib::secondLast = 0;
int main(int argc, const char * argv[]){
    Fib myFib;
    Fib anotherFib;
    
    cout <<myFib.secondLast << endl << myFib.last << endl;
    cout<<"--------------------------------------------------"<<endl;
    for (int i = 0; i < 5; i++) {
        cout << myFib.next() << endl;
    }
    cout<<"--------------------------------------------------"<<endl;
    for (int i = 0; i < 5; i++) {
        cout << anotherFib.next() << endl;
    }
    cout<<"--------------------------------------------------"<<endl;
    cout << myFib.next() << endl;
    cout<<"--------------------------------------------------"<<endl;
    cout << anotherFib.next(true) << endl;
    cout<<"--------------------------------------------------"<<endl;
    for (int i = 0; i < 5; i++) {
        cout << myFib.next() << endl;
    }
    return 0;
};
