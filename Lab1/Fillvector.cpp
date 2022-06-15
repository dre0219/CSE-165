#include <string> 
#include <iostream> 
#include <fstream> 
#include <vector>
using namespace std;
int main()
{
    ifstream myfile;
	myfile.open("code.cpp");
	vector<string> p;

    string line;
    while (getline(myfile, line)) //getline returns true if read successfully
        p.push_back(line); // Add the line to the end of v 
    int j = 0;
	string A;
	for (int i = p.size() - 1; i>=0; i--) {
	cout << i << " : " << p[i] << endl ;
	}
	
    cout << A << " ";
	myfile.close();
	return 0;
}