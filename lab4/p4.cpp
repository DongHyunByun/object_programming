#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream ftemp;
	ifstream stemp;
	ofstream ttemp;
	string temp;
	
	//firstFile=ù��° �ؽ�Ʈ����, secondFile=�ι�° �ؽ�Ʈ����
	//newFile= �������� ��ģ ���ο� ����
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
