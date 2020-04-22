#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream myfile;
	ofstream newlenfile;
	string line;
	string temp;
	int len;
	int i = 0;

	cout << "length = "; cin >> len;

	myfile.open("input.txt");
	newlenfile.open("newlen.txt");

	while (getline(myfile, line)) {
		temp += line;
		temp += " ";
	}


	while (1) {
		if (i + len - 1 >= temp.length()) {
			newlenfile << temp.substr(i);
			break;
		}
		newlenfile << temp.substr(i, len) << endl;
		i += len;
	}

	myfile.close();
	newlenfile.close();

	return 0;
}
