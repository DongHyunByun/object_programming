#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void isPalin(bool(*f)(string, string), string a, string b) {
	if (f(a, b)) {
		cout << "이 문자는 회문입니다."<<endl;
	}
	else {
		cout << "이 문자는 회문이 아닙니다."<<endl;
	}
}

int main() {
	while (1) {
		string word;
		string wordR;

		cout << "문자열 하나를 입력해주세요 : "; cin >> word;
		
		for (int i = 0; i < word.size(); i++) {
			wordR += word[word.size()-1 - i];
		}

		cout << "입력하신 문자열의 역순 : " << wordR<<endl;

		isPalin([](string a, string b) {return (a == b);}, word, wordR);
		cout << endl;
	}
}
