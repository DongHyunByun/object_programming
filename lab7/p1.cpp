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
				cout << "이미 존재하는 ID입니다." << endl;
				cout << "종료합니다.";
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
		if (id == "종료") {
			cout << "종료하겠습니다.";
			return 0;
		}
		cout << "Password : "; cin >> password;
		for (int i = 0; i < 3; i++) {
			if (user[i].getId() == id and user[i].getPassword() == password) {
				cout << "로그인 되셨습니다." << endl;
				cout << "==============================" << endl;
				find = true;
				break;
			}
		}
		if (find==false) {
			cout << "잘못된 ID거나 PASSWORD 입니다."<<endl;
			cout << "==============================" << endl;
		}
	}
	
	return 0; 
	
}
