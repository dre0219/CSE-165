#ifndef ENTRY_H
#define ENTRY_H

#include <cassert>
#include <iostream>
#include <string>
using namespace std;

struct Entry {
	string fName;
    string lName;
    string email;

    string getFirstName(){
        return fName;
    };

    string getLastName(){
        return lName;
    };
    
    string getEmail(){
        return email;
    };

    void setName(string name){
        fName = name;
    };

    void setLastname(string lastname){
        lName = lastname;
    };

    void setEmail(string mail){
        email = mail;
    };

    void print(){
        cout<<"First Name: "<<fName<<"\n";
        cout<<"Last Name: "<<lName<<"\n";
        cout<<"Email: "<<email<<"\n";
    }
};


#endif