#include <string> 
#include <iostream> 
#include <fstream> 
#include <vector>
using namespace std;

int main()
{
    ifstream myfile;
	myfile.open("code.cpp");
	vector <string> v;

    string line;
    while (getline(myfile, line)) //getline returns true if read successfully
        v.push_back(line); // Add the line to the end of v // Add line numbers:
    int j = 0;
	string p;
	for (int i = 0; i < v.size(); i++) {
            p+= v[i];
	}

	
    cout << p << " ";
	myfile.close();
	return 0;
}