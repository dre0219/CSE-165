#include <iostream>
#include "Dog.h"
#include <string>
#include "display.h"
#include "Animal.h"
using namespace std;

int main(int argc, const char * argv[]){
	int x = 0;
	char y = ' ';
	string z = "";
	int age = 0;
	vector<Animal*> list;
	cout<<"Enter the amount of dogs with names and age. \n";
	cin>> x;
	for(int i = 0; i<x; i++){
		cin>>y;
		cout<<"";
		cin>> z;
		cout<<"";
		cin>> age;

		if( y == 'A'){
			Animal* a = new Animal();
			a->setName(z);
			a->setAge(age);
			list.push_back(a);
		}

		else{
			Dog* b = new Dog(z, age);
			b->setName(z);
			b->setAge(age);
			list.push_back(b);
		}
	}
	display(list);
return 0;}