#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
vector<vector<string>*> myVector; //double  vector
int n = 0;
for(int i =0; i<10; i++){
    vector<string>* myVectorS = new vector<string>();
    myVector.push_back(myVectorS); //initialize
}

string input = "";
cin>> input;

while(input !=  "quit"){
    n = input.size() - 1;
    vector<string> &vec = *myVector[n];
    vec.push_back(input);
    cin>>input;}

cout<<"Output: \n";

 for(int j = 0; j<10; j++){
     vector<string> &myVectorS = *myVector[j];
     int sum = 0;
     for(int k = 0; k<myVectorS.size(); k++){
         sum += myVectorS[k].size(); //Adding all the letters
     }
    if(sum >0){
        cout<<sum<<" ";
        cout<<myVectorS.size(); //Number of words
        cout<<"\n";}
    }
}