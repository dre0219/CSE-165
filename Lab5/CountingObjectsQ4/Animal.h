#pragma once //New to this
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Animal {
	string AnimalName;
	int age;
public:
	static int count; 
	Animal() {
		cout << "Creating Generic Animal" << endl;
		count++;
		AnimalName = "Generic Animal";
		age = 0;
	}

	void display(const vector<Animal*> & list) {

	}

	string getName() {
		return AnimalName;
	}

	void setName(string name) {
		this->AnimalName = name;
	}

	int getAge() {
		return age;
	}

	void setAge(int age) {
		this->age = age;
	}

	~Animal() {
		cout << "Deleting Generic Animal" << endl;
	}

	void feed() {
		cout << "Some meal, please!!" << endl;
	}
};