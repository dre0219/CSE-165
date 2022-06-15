#ifndef AddressBook_H
#define AddressBook_H
#include <string> 
#include "Entry.h"
using namespace std;
#include <iostream>

struct AddressBook{

	

	struct Entry
	{
		string name;
		string lastname;
		string entry;
		Entry *next;



	} *start;
	AddressBook(string n, string l, string e)
	{
	
		Entry *A = new Entry;
		A->name = n;
		A->lastname = l;
		A->entry = e;
		A->next = NULL;
		start = A;

	}

	void add(AddressBook * B)
	{
		Entry * e = start;
		while (e->next != NULL)
		{
			e = e->next;
		}
		e->next= B->start;

	}
	void print()
	{
		Entry * e = start;
		while (e != NULL)
		{
			cout << "First Name: " << e->name << endl;
			cout << "Last Name: " << e->lastname << endl;
			cout << "Email: " << e->entry << endl;
			cout << endl;
			e = e->next;
		}
	} 
};
#endif