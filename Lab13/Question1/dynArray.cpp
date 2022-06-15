#include <iostream>
#include <math.h>
#include "DynArray.h"
using namespace std;
template <class X, class Z>
void set_five(X& y){
	Z z = 0;
	for (int i = 0; i < 5; i++){
		z = (Z)(2.0*cos(double(i)));
		y.add(z);
		cout << y[i] << " ";
	}
	cout << endl;
}

int main(int argc, const char * argv[]){
	DynArray<float> fa;
	set_five<DynArray<float>, float>(fa);

	DynArray<int> ia;
	set_five<DynArray<int>, int>(ia);
	return 0;
}