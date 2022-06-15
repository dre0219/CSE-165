#ifndef LinkedList_h
#define LinkedList_h
#include <iostream>
using namespace std;

struct LinkedList { 
    struct Link { 
		void* data;
		Link* next;
		void initialize(void* dat, Link* nxt) {
			data = dat;
			next = nxt;
		} 
	}* head;
    Link *end;
    int size;
    
    void initialize() {
        head = 0;
        end = 0;
	}
	
    void add(void* dat) {
        Link* newLink = new Link;
        newLink -> initialize(dat, NULL);
        if(head ==NULL && end == NULL){
            head = newLink;
            end = newLink; 
        }
        else{
            end->next = newLink;
            end = end->next; 
        }
    }
    
    void* get(int index) {
        int count = 0;
        Link* tempLink = head;

        while(count != index){
            tempLink = tempLink->next;
            count++;
        }

        return tempLink->data;
    }

    void cleanup() {
        while(head!=0){
            Link* oldHead = head;
            head = head->next;
            delete oldHead;
        }
        if(head == 0){
            cout<<"Linked List is empty \n";
        }
    }
};
#endif
