#include <iostream>
using namespace std;
class Monitor {
	public:
		static int count;

		int incident(){
			count++;	
		}
		void print() {
			cout << count << " Incidents" << endl;	
		}
};
