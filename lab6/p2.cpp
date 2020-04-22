#include <iostream>
#include <string>

using namespace std;

class CStudent {
private:
	int id;
	string name;
	string major;

public:
	CStudent() :id(2018000000), name("홍길동"), major("컴퓨터공학과") {
	}

	CStudent(int num, string inputName, string inputMaj) {
		id = num;
		name = inputName;
		major = inputMaj;
	}

	void Display() {
		cout << "학번 :" << id << endl;
		cout << "이름 :" << name << endl;
		cout << "전공 :" << major << endl;
		cout << endl;
	}

	void setNumber(int num) {
		id = num;
	}

	void setName(string word) {
		name = word;
	}

	void setMajor(string word) {
		major = word;
	}

	int getNumber() {
		return id;
	}

	string getName() {
		return name;
	}

	string getMajor() {
		return major;
	}
};

int main() {
	CStudent s[3];
	int inputNumber;
	string inputName, inputMajor;
	int length = 0;

	while (1) {
		bool isrepected = false;
		if (length == 3) {
			cout << "----모든입력이 완료되었습니다----" << endl;
			for (int i = 0; i < 3; i++) {
				cout << i + 1 << "학생정보" << endl;
				s[i].Display();
			}
			break;
		}
			
		cout << length + 1 << " 번째 학생 입력" << endl;
		cout << "학번 : "; cin >> inputNumber;
		cout << "이름 : "; cin >> inputName;
		cout << "전공 : "; cin >> inputMajor;
		

		
		for (int i = 0; i < length; i++) {
			if (s[i].getNumber() == inputNumber) {
				isrepected = true;
				break;
			}
		}

		if (isrepected == false) {
			s[length].setMajor(inputMajor);
			s[length].setName(inputName);
			s[length].setNumber(inputNumber);
			cout << "※입력완료" << endl;
			cout<<endl;
			length++;
		}
		else {
			cout << "※중복된 학번이 존재합니다." << endl;
			cout << endl;
		}
	}

	return 0;
}