#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	ifstream file;
	file.open("words.txt");
	int counter = 0;
	string A;
	while (getline(file,A)){
		counter++;
		for (int i = 0; i < A.length(); i++){
			if (A[i] == ' ' || A[i] == '\n')	
				counter++;
		}
	}
	cout << counter << endl;
	file.close();
	return 0;
}