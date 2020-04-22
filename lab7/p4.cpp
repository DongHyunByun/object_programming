#include <iostream>
#include <string>

using namespace std;

class Account {
private:
	int id, remain;
	string name;
	static int sumRemain;

public:
	int getsumRemain() {
		return sumRemain;
	}
	void setName(string name_) {
		name = name_;
	}
	void setId(int id_) {
		id = id_;
	}
	void setRemain(int remain_) {
		sumRemain += remain_;
		remain = remain_;
	}
	string getName() {
		return name;
	}
	int getId() {
		return id;
	}
	int getRemain() {
		return remain;
	}

//연속으로 num번 나옴
	
};
int Account::sumRemain = 0;

int main() {
	int num;
	cout << "총 학생 수 입력: ";cin >> num;
	Account *AccountA = new Account[num];
	int id, remain;
	string name;
	

	for (int i = 0; i < num; i++) {
		cout << i + 1 << "번째 학생 계좌 입력 : 학번 : ";cin >> id;
		cout << endl;
		cout << "이름 : ";cin >> name;
		cout << endl;
		cout << "잔액 : ";cin >> remain;
		cout << "=====================================" << endl;
		AccountA[i].setId(id);
		AccountA[i].setName(name);
		AccountA[i].setRemain(remain);
	}
	cout << endl;
	cout<<"회수된 금액 : "<<AccountA[0].getsumRemain();
	delete[] AccountA;
	
	return 0; 
	
}
