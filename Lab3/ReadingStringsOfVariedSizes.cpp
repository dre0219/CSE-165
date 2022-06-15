#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> vector;
    std::string word; 
    std::cout<<"Enter a list of words, then enter a lowercase letter to find its equals. \n";
    std::cin >> word;
    transform(word.begin(), word.end(), word.begin(), ::toupper);
    while(word != "QUIT"){
        if(word.size() == 1){
            for(int i = 0; i < vector.size(); i++){
                if(word[0] == vector[i][0]){
                    std::cout << vector[i] << '\n';}
            }
        }
        else{
            vector.push_back(word);}
        std::cin >>  word;
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    }

    return 0;
}