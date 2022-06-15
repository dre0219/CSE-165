#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;
int main(int argC, const char * argV[]) {

vector<vector<string>*> myVector; //double  vector
int n = 0;
for(int i =0; i<10; i++){ //fills in the vector 10x
    vector<string>* myVectorS = new vector<string>();
    myVector.push_back(myVectorS); //initializes
}

string input = "";
cin>> input;
while(input !=  "quit"){
    n = input.size() - 1;
    vector<string> &vec = *myVector[n]; 
    vec.push_back(input);
    cin>>input;
}
    cout<<"\n";

 for(int x = 0; x<10; x++){
     vector<string> &myVectorS = *myVector[x]; 
     for(int p = 0; p<myVectorS.size(); p++){
         cout<<myVectorS[p]<<"\n";}
    } 
}
