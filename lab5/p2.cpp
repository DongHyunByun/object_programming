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

	cout << "기본값 출력> " << str << endl;
	convert(&str);
	cout << "변환된 값 출력> " << str << endl;
}