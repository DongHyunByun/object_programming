#include <iostream>
#include <string>

using namespace std;

class Account {
private:
	string name, id;
	int balance;

public:
	Account operator-(const Account &a) {
		Account result(name, id, balance - a.balance);
		return result;
	}
	Account operator+(const Account &a) {
		Account result(name, id, balance + a.balance);
		return result;

	}
	friend std::ostream& operator<<(std::ostream& os,const Account& a) {
		return os << "�й�: " << a.id << "   �̸� : " << a.name << "   �ܾ� : " << a.balance << endl;
	}

	string getname() {
		return name;
	}
	string getid() {
		return id;
	}
	int getbalance() {
		return balance;
	}
	Account(string name_, string id_, int balance_) {
		name = name_;
		id = id_;
		balance = balance_;
	}
};


int main() {
	string inid;
	string outid;
	int inindex, outindex;

	Account acnt[3] = {
		Account("������","1",10000),
		Account("������","2",0),
		Account("�̰�ȣ","3",5000),
	};

	while (1) {
		inindex = -1;
		outindex = -1;
		cout << "���� ���� �л��� �й��� �Է��ϼ���: "; cin >> outid;
		if (outid == "����") {
			cout << "�����մϴ�."<<endl;
			for (int i = 0; i< 3;i++) {
				cout << acnt[i];
			}
			return 0;
		}
		cout << "���� ���� �л��� �й��� �Է��ϼ���: "; cin >> inid;

		for (int i = 0; i < 3; i++) {
			if (acnt[i].getid() == outid) {
				outindex = i;
			}
			if (acnt[i].getid() == inid) {
				inindex = i;
			}
		}

		if ( (outindex == -1) or (inindex==-1) ) {
			cout << "������ �л� Ȥ�� �޴� �л��� �й��� �������� �ʽ��ϴ�. �ٽ��Է����ּ���." << endl;
			continue;
		}
		else if (outindex==inindex) {
			cout << "������ �л��� �޴� �л��� �����մϴ�." << endl;
			continue;
		}
		else if (acnt[outindex].getbalance() == 0) {
			cout << "������ �л��� �ܾ��� �����մϴ�" << endl;
			continue;
		}
		
		acnt[inindex] = acnt[inindex] + acnt[outindex];
		acnt[outindex] = acnt[outindex] -acnt[outindex];

		cout << "���� ���� �л��� �ܾ� :  ";
		cout << acnt[outindex];
		cout << "���� ���� �л��� �ܾ� :  ";
		cout << acnt[inindex];
	}

	return 0; 
	
}
