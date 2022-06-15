#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
vector<string> myVector;
int temp = 0;
string word  = "";
cin >>word;

while(word != "quit"){
    if(word.size() >= 4){  //word has to be 4 letters or greater 
        myVector.push_back(word);
    }
    
    else{
        cout<<"Output:";
        for(int i =0; i<myVector.size(); i++){
            temp = 0;
            for(int x = 0; x<word.size(); x++){
                if(word[x] == myVector[i][x])
                temp = temp + 1;
            }
            if(word.size() == temp){
                cout<<myVector[i] << " ";
            }
        }
    }
    cin>> word;
}   
}