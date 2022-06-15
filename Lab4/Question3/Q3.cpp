#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include "LinkedList.h"
using namespace std;

int main(int argc, const char * argv[]) {
    LinkedList TheList = LinkedList();
    TheList.initialize();
    ifstream myFile("input.txt");
    string Line;

    while(!myFile.eof()){
        myFile>>Line;
        double *temp = new double;
        *temp = stod(Line);
        TheList.add(temp);
    }

     while(TheList.head != NULL){
        cout<<*(double *)TheList.head->data <<"\n";
        TheList.head = TheList.head->next;
    }

    TheList.cleanup();

}