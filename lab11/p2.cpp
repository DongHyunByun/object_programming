#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void isPalin(bool(*f)(string, string), string a, string b) {
	if (f(a, b)) {
		cout << "�� ���ڴ� ȸ���Դϴ�."<<endl;
	}
	else {
		cout << "�� ���ڴ� ȸ���� �ƴմϴ�."<<endl;
	}
}

int main() {
	while (1) {
		string word;
		string wordR;

		cout << "���ڿ� �ϳ��� �Է����ּ��� : "; cin >> word;
		
		for (int i = 0; i < word.size(); i++) {
			wordR += word[word.size()-1 - i];
		}

		cout << "�Է��Ͻ� ���ڿ��� ���� : " << wordR<<endl;

		isPalin([](string a, string b) {return (a == b);}, word, wordR);
		cout << endl;
	}
}
