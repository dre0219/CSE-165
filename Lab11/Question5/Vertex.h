#ifndef LA10_Vertex_h
#define LA10_Vertex_h
#include <iostream>
#include <string>
#include "Shared.h"
using namespace std;
class Vertex : public Shared {
    string label;
	double data[10000000];
public:
    // Constructor prints out the label after vertex is initialized 
	Vertex(string l){
        label = l;
        for (int i = 0; i < 10000000; i++) {
            data[i] = i;
        }
		cout << "Creating " << label << endl;
	}
    // Accessor method for the label
    string getLabel(){
        return label;
    }
    // Destructor prints out the label of the vertex.
	~Vertex(){
        cout << "Deleting " << label << endl;
	}
};
#endif