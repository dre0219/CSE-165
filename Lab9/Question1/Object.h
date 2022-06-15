#include <iostream>
using namespace std;

//This does the forward declaration of the Number and the Coord3D
class Object;
class Coord3D;
class Number;

//ObjectADT
class Object {
public:
	virtual Object* multiply ( const Object* obj ) const = 0;
	virtual void print() = 0;
	virtual ~Object() {}
};

class Number : public Object{
public:
	int num;
	Number();
	Number(int);
	~Number();
	Object* multiply(const Object* other) const;
	void print();
};

class Coord3D : public Object{
public:
	int x, y, z;
	Coord3D(){
		this->x = 0;
		this->y = 0;
		this->z = 0; 
	}

	Coord3D(int x1, int y1, int z1){
		this->x = x1;
		this->y = y1;
		this->z = z1;
	}

	~Coord3D(){};

	Object* multiply(const Object* other) const{
		Coord3D *cor = new Coord3D();
		if(typeid (*other) == typeid(Number)){ //if NUm
			Object* obj = const_cast <Object*> (other);
			Number* TheNumber = dynamic_cast <Number*> (obj);
			cor->x = TheNumber->num * this->x;
			cor->y = TheNumber->num * this->y;
			cor->z = TheNumber->num * this->z;
		}

		else{
			Object* obj = const_cast <Object*> (other);
			Coord3D* coord = dynamic_cast <Coord3D*> (obj);
			cor->x = coord->x * this->x;
			cor->y = coord->y * this->y;
			cor->z = coord->z * this->z; 
		}
		return cor;
	}
	void print(){
		cout << "x = " << this->x << ", y = " << this->y << ", z = " << this->z << endl;
	}
};

Number::Number(){
	this->num = 0;}
Number::Number(int num){
	this->num = num;}
Number::~Number(){}

Object* Number::multiply(const Object* other) const{
	if(typeid(*other) == typeid(Number)){ 
		Object* obj = const_cast <Object*> (other);
		Number* numb = dynamic_cast <Number*> (obj);
		return new Number(numb->num * this->num);
	}

	else{
		Object* obj = const_cast <Object*> (other);
		Coord3D* coord = dynamic_cast <Coord3D*> (obj);
		return new Coord3D(coord->x * this->num, coord->y * this->num, coord->z * this->num);
	}
}

void Number::print(){
	cout << "Number = " << this->num << endl;
}