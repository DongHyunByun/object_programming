#include <iostream>
#include <string>

using namespace std;

class CStudent {
private:
	int id;
	string name;
	string major;

public:
	CStudent() :id(2018000000), name("ȫ�浿"), major("��ǻ�Ͱ��а�") {
	}

	CStudent(int num, string inputName, string inputMaj) {
		id = num;
		name = inputName;
		major = inputMaj;
	}

	void Display() {
		cout << "�й� :" << id << endl;
		cout << "�̸� :" << name << endl;
		cout << "���� :" << major << endl;
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
			cout << "----����Է��� �Ϸ�Ǿ����ϴ�----" << endl;
			for (int i = 0; i < 3; i++) {
				cout << i + 1 << "�л�����" << endl;
				s[i].Display();
			}
			break;
		}
			
		cout << length + 1 << " ��° �л� �Է�" << endl;
		cout << "�й� : "; cin >> inputNumber;
		cout << "�̸� : "; cin >> inputName;
		cout << "���� : "; cin >> inputMajor;
		

		
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
			cout << "���Է¿Ϸ�" << endl;
			cout<<endl;
			length++;
		}
		else {
			cout << "���ߺ��� �й��� �����մϴ�." << endl;
			cout << endl;
		}
	}

	return 0;
}