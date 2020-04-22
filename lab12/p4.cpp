#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
	ofstream myfile;
	int intTemp;
	myfile.open("temp.txt");
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			intTemp = rand() % 101;
			myfile << intTemp << " ";
		}
		myfile << endl;
	}

	myfile.close();

	ifstream fin;
	string fname;
	int row, col,temp;
	vector<vector<int>> V(10, vector<int>(10));
	cout << "파일 이름 : ";cin >> fname;

	try {
		fin.open(fname);
		if (!fin.good()) {
			throw fname;
		}
	}
	catch (string a) {
		cout << "File \" " << a << "\" not found" << endl;
		return 0;
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			fin >> temp;
			V[i][j] = temp;
		}
	}

	cout << "출력할 행 크기 : ";cin >> row;
	cout << "출력할 열 크기 : ";cin >> col;

	try {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				cout << setw(4)<<(V.at(i)).at(j);
			}
			cout << endl;
		}
	}
	catch (exception& ) {
		cout << endl<<"invalid vector<T> subscript" << endl;
		fin.close();
		return 0;
	}
	
	fin.close();
	return 0;

}
