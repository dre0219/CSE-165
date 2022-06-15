#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include "Stash.h"
using namespace std;

int main(int argc, const char * argv[]) {
Stash myStash =  Stash(); 
myStash.initialize(1);
int max = 0;
cout<<"Enter your max: ";
cin>>max;
myStash.number = max;
int number = 0;
char c = ' ';
cout<<"Enter a letter: ";
cin>>c;
cout<<"Enter a number: ";
cin>>number;

while(number != 99 && c != '&'){
    char *temp = new char;
    temp =  &c;
    if(number > 0){
        for(int i = 0; i<number; i++){ //add to the stash object i amount of items
            myStash.add(temp);
    }
    }

    else{
        number = number *-1;
        for(int i = 0; i<number; i++){
             myStash.add(temp); //add to the stash object i amount of items
        }
        myStash.add("\n");
    }
cout<<"Enter a letter: ";
cin>>c;
cout<<"Enter a number: ";
cin>>number;
}

for(int i = 0; i<myStash.count(); i++){
    cout<<*(char *)myStash.fetch(i);
}

cout<<myStash.counting<<"\n";
cout<<myStash.number<<"\n";
myStash.cleanup();  
};