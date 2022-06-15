#include <iostream>

struct oneCharOneDouble{
    char x;
    double y;
};

struct twoCharsOneDouble{
    char x, x19;
    double y;
};

struct threeCharsOneDouble{
    char x, x23, x19;
    double y;
};

struct fourCharsOneDouble{
    char x, x23, x33, x14;
    double a;
};

struct empty{};

struct oneCharOneIntOneChar{
    char x;
    int i;
    char x21;
};

struct twoCharsOneInt{
    char x, x19;
    int i;
};

int main(){
    std::cout << sizeof(oneCharOneDouble) << '\n';
    std::cout << sizeof(twoCharsOneDouble) << '\n';
    std::cout << sizeof(threeCharsOneDouble) << '\n';
    std::cout << sizeof(fourCharsOneDouble) << '\n';
    std::cout << sizeof(empty) << '\n';
    std::cout << sizeof(oneCharOneIntOneChar) << '\n';
    std::cout << sizeof(twoCharsOneInt) << '\n';
    return 0;
}