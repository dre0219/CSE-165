#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

int main() {
	int i = 0;
	string word;
	ifstream myfile;
	myfile.open("words.txt");
	string A;
	string TheWord;

    cout<<"Enter the word you want to find occurring: ";
	cin >> TheWord;
	int counter = 0;
	char B;
	
	while (myfile >> word) {
		
		if (word == TheWord) {
			counter++;
			continue;
		}
		i = 0;
		while (word[i])
  		{
    			B=word[i];
    			word[i] = (tolower(B));
    			i++;
			
  		}
		
		for (int i = 0; i < word.length(); i++) {
			if (word[i] == ',' || word[i] == '?' || word[i] == '.')
				word = word.substr(0, word.length()-1);
		}
		if (word == TheWord)
			counter++;
	}
	cout << counter << endl;
	myfile.close();
	return 0;
}
