#ifndef STACK_H
#define STACK_H
#include <iostream>
struct Stack {
	int sizing;
	void (*deletecb)(void* pt);
	struct Link {
		void* data;
		Link* next;
		
		void initializing(void* dat, Link* nxt){
			data = dat;
			next = nxt;
		}
	}* head;
	void initializing(){
		head = 0;
		sizing = 0;
	}
	void push(void* dat){
		sizing++;
		Link* newLink = new Link;
		newLink->initializing(dat, head);
		head = newLink;
	}
	void* peek(){
		if (head == 0){
			std::cout << "Stack is empty \n";
		}
		return head->data;
	}
	void* pop(){
		sizing--;
		if(head == 0)
			return 0;
		
		void* result = head->data;
		Link* oldHead = head;
		head = head->next;
		delete oldHead;
		return result;
	}
	void cleanup(){
		int TemporarySize = sizing;
		for(int i = 0; i < TemporarySize; i++){
			deletecb(pop());
		}
		if (head == 0){
			std::cout << "Stack is empty \n";
		}
		else {
			std::cout << "Stack is not empty \n";
		}
	}
	void setDeleteCallback(void (*del_func_ptr)(void * pt)){
		deletecb = del_func_ptr;
	}
};
#endif