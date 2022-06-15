
#ifndef RECTSTASH_H
#define RECTSTASH_H
#include <iostream>
#include <vector>
using namespace std;
class Vector{
public:
    float x, y;
    static Vector null;
    Vector(){
        x=0;
        y=0;
    }
    Vector(float X,float Y){
        x=X;
        y=Y;
    }
    Vector add(Vector a){
        x= x+a.x;
        y= y+a.y;
        return Vector(x,y);
    }
    ~Vector(){}
    Vector print(){
        cout << "(" << x << ", "  << y << ")"<< endl;
    }
};


class Rect{
public:
    float a, b, c, d;
    Rect(){
        a=0;
        b=0;
        c=0;
        d=0;
    }
    Rect(float A, float B, float C, float D){
        a=A;
        b=B;
        c=C;
        d=D;
    }
    bool contains(Vector r){
        if((r.x > a && r.x < (a+c)) && (r.y < b && r.y > (b-d))){
            return true;}
        else
            return false;
    }
};

class RectStash{
public:
	RectStash(){}
    vector<Rect> v;

    void add(Rect t){
        v.push_back(t);
    }

    Rect fetch(int i){
        return v[i];
    }
    
    int size(){
        return v.size();
    }
	~RectStash(){}
};
#endif

int main(){
	float a, b, c, d, e, f;
    RectStash rects;
    while(true){
        cin >> a;
        cin >> b;
        cin >> c;
        cin >> d;
        if(a<0 && b<0 && c<0 && d<0)
            break;
        rects.add(Rect(a, b, c, d));
    }
    while(true){
        cin >> e;
        cin >> f;
        if(e == -99 && f == -99)
            break;

        for(int i = 0; i < rects.size(); i++){
            if(rects.v[i].contains(Vector(e,f)))
                cout << "in ";
            else
                cout << "out ";
        }
        cout << endl;
    }
}