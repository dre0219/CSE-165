#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <fstream>
using namespace std; // Given a text file file.txt, print all the words with their corresponding count. 

//When declaring an unordered map
void printFrequencies(const string &str){
	unordered_map<string, int> fileMap; 
	stringstream wordFile(str); //The sstream allows to represent a word from the file being read
	string word;
	int count = 0;
	//https://www.geeksforgeeks.org/stringstream-c-applications/ - Used this for the string stream and string cross reference:
	while(wordFile >> word){ //This checks if the word in the file matches any word from the map.
		// Use the container properties 
		fileMap[word] = fileMap[word] + 1; 
	}

	unordered_map<string, int>::iterator check; 
    for (check = fileMap.begin(); check != fileMap.end(); check++) 
        cout << "( " << check->first << "," << check->second << " )" << endl; 
		// The "itr->first" stores the key part & "itr->second" stroes the value part
	}

int main(int argc, char** argv){
	std::ifstream ifs("file.txt");
	std::string content((std::istreambuf_iterator<char>(ifs)),(std::istreambuf_iterator<char>())); 
	printFrequencies(content); //Printing frequencies
	return 0;
};