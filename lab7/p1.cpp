#include <iostream>
#include <string>

using namespace std;

class User {
private:
	string ID, Password;

public:
	User() {

	}
	void setID(string ID_) {
		ID = ID_;
	}
	void setPassword(string Password_) {
		Password = Password_;
	}
	string getId() {
		return ID;
	}
	string getPassword() {
		return Password;
	}
};

int main() {
	User user[3];
	string id, password, searchId, searchPassword;
	
	for (int i = 0; i < 3; i++) {
		cout << "=============" << i + 1 << "=============" << endl;
		cout << "id : "; cin >> id;
		for (int j = 0; j < i; j++) {
			if (user[j].getId() == id) {
				cout << "�̹� �����ϴ� ID�Դϴ�." << endl;
				cout << "�����մϴ�.";
				return 0;
			}
		}
		cout << "password : "; cin >> password;
		cout << "===========================" << endl;
		
		user[i].setID(id);
		user[i].setPassword(password);
	}

	while (1) {
		bool find = false;
		cout << "=========== Log In ===========" << endl;
		cout << endl;
		cout << "Id : "; cin >> id;
		if (id == "����") {
			cout << "�����ϰڽ��ϴ�.";
			return 0;
		}
		cout << "Password : "; cin >> password;
		for (int i = 0; i < 3; i++) {
			if (user[i].getId() == id and user[i].getPassword() == password) {
				cout << "�α��� �Ǽ̽��ϴ�." << endl;
				cout << "==============================" << endl;
				find = true;
				break;
			}
		}
		if (find==false) {
			cout << "�߸��� ID�ų� PASSWORD �Դϴ�."<<endl;
			cout << "==============================" << endl;
		}
	}
	
	return 0; 
	
}
