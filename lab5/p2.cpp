#include <iostream>
#include <string>

using namespace std;

void convert(string *p) {
	string word;
	cout << "input> "; cin >> word;
	*p = word;
}

int main() {
	string str = "This is default value";

	cout << "�⺻�� ���> " << str << endl;
	convert(&str);
	cout << "��ȯ�� �� ���> " << str << endl;
}