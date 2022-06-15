#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double radius;
	
    cout<<"Enter the radius of your circle: ";
	cin>>radius;

	cout << M_PI * radius * radius << endl;
	return 0;
}