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

//�������� num�� ����
	
};
int Account::sumRemain = 0;

int main() {
	int num;
	cout << "�� �л� �� �Է�: ";cin >> num;
	Account *AccountA = new Account[num];
	int id, remain;
	string name;
	

	for (int i = 0; i < num; i++) {
		cout << i + 1 << "��° �л� ���� �Է� : �й� : ";cin >> id;
		cout << endl;
		cout << "�̸� : ";cin >> name;
		cout << endl;
		cout << "�ܾ� : ";cin >> remain;
		cout << "=====================================" << endl;
		AccountA[i].setId(id);
		AccountA[i].setName(name);
		AccountA[i].setRemain(remain);
	}
	cout << endl;
	cout<<"ȸ���� �ݾ� : "<<AccountA[0].getsumRemain();
	delete[] AccountA;
	
	return 0; 
	
}
