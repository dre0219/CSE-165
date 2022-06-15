#include <iostream>

int main(){
    char C;
    int N;
    std::cout<<"Enter your inputs. \n";
    std::cin >> C >> N;
    while(N != -2){
        if(N == -1){
            std::cout << '\n';}
        else{
            for(int i = 0; i < N; i++){
                std::cout << C;}
            std::cout << '\n';}
        std::cin >> C >> N;}
    return 0;}