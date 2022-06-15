
#include <iostream>
#include "Dog.h"
#include "Animal.h"
using namespace std;

int main(int argc, const char * argv[])
{
    Dog myDog = Dog("Bruno", 4);
    
    cout << myDog.getName() << " is " << myDog.getAge() << " years old." << endl;
    myDog.feed();
    return 0;
}
