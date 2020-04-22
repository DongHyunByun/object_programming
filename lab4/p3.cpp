#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream myfile;
	int intTemp;
	myfile.open("temp.txt");
	for (int i=1; i <= 10; i++) {
		for (int j=1; j <= 10; j++) {
			intTemp = rand() % 101;
			myfile << intTemp <<" ";
		}
		myfile << endl;
	}

	myfile.close();
	
	return 0;

}
