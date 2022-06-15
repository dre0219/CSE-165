#ifndef CIRCLE_H
#define CIRCLE_H
class Circle{
private:
    double x, y, z;
public:
    double area;

Circle(){this->x = 0; this->y = 0; this->z = 1; this->area = 3.14159;}
Circle(double x, double y, double z){
    this->x = x;
    this->y = y;
    this->z = z;
    }
    double getX(){
        return this->x;
    }

    double getY(){
        return this->y;
    }

    double getZ(){
        return this->z;
    }

    void setX(double x){
        this->x = x;
    }

    void setY(double y){
        this->y = y;
    }

    void setZ(double z){
        this->z = z;
    }
};
#endif