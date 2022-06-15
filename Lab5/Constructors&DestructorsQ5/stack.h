#pragma once
#include <iostream>
class Stack {
public:
	Stack(){initialize();}
	Stack(int x){
		initialize();
		for(double i = 1.0, count = 0; count < x; i+=0.1){
			push(i);
			count++;
		}
	}
	~Stack(){ while(P != NULL){std::cout << pop() << ' ';} }
	struct Link {
		double TheData;
		Link* NextIteration;
	
		void initialize(double data, Link* next) {
			TheData = data;
			NextIteration = next;
		}
	}*P;

	void initialize() {
		P = 0;
	}

	void push(double data) {
		Link* newLink = new Link;
		newLink->initialize(data, P);
		P = newLink;
	}

	double peek() {
		if (P == 0) {
			std::cout << "Stack is empty";
		}
		return P->TheData;
	}

	double pop() {
		if (P == 0)
			return 0;

		double result = P->TheData;
		Link* oldP = P;
		P = P->NextIteration;
		delete oldP;
		return result;
		return 0;
	}

	void cleanup() {
		if (P == 0) {
			std::cout << "Stack is empty";
		}
		else {
			std::cout << "Stack is not empty";
		}
	}
};