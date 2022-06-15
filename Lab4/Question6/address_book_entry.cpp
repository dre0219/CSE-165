#include <iostream>
#include "Entry.h"

using namespace std;
int main(int argc, const char * argv[])
{
    string name, lastname, email;
    
    cout << "Enter your first name: ";
    cin >> name;
    cout << "Enter your last name: ";
    cin >> lastname;
    cout << "Enter your last email: ";
    cin >> email;
    
    Entry myEntry; //vector entry
    
    myEntry.setName(name);
    myEntry.setLastname(lastname);
    myEntry.setEmail(email);
    
    myEntry.print();
    
    return 0;
}