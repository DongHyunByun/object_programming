#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream ftemp;
	ifstream stemp;
	ofstream ttemp;
	string temp;
	
	//firstFile=첫번째 텍스트파일, secondFile=두번째 텍스트파일
	//newFile= 두파일을 합친 새로운 파일
	ftemp.open("firstFile.txt");
	stemp.open("secondFile.txt");
	ttemp.open("newFile.txt");

	while (getline(ftemp, temp)) {
		ttemp << temp << endl;
	}

	while (getline(stemp, temp)) {
		ttemp << temp << endl;
	}

	ftemp.close();
	stemp.close();
	ttemp.close();
}
