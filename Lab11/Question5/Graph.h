#ifndef LA10_Graph_h
#define LA10_Graph_h
#include "Vertex.h"
using namespace std;
class Graph {
public:
    vector<Vertex*> items;
    // A method to add a vertex to the items vector 
    void add(Vertex* d){
        d->ref();
        this->items.push_back(std::move(d)); //emplace_back wouldnt work.
    }
    // A method to display the graph as pairs of vertices 
    void print (){
        for(int i = 0; i < this->items.size() - 1; i++){
            if(i % 2 == 0)
                std::cout << this->items[i]->getLabel() << " - " << this->items[i + 1]->getLabel() << '\n';
        }
    }
    // A method to free up all the space taken up by the graph 
    void deleteAll(){
        for(auto& v : this->items){
            v->unref();
        }
    }
};
#endif