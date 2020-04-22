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
		return os << "학번: " << a.id << "   이름 : " << a.name << "   잔액 : " << a.balance << endl;
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
		Account("신은섭","1",10000),
		Account("김유민","2",0),
		Account("이강호","3",5000),
	};

	while (1) {
		inindex = -1;
		outindex = -1;
		cout << "돈을 보낼 학생의 학번을 입력하세요: "; cin >> outid;
		if (outid == "종료") {
			cout << "종료합니다."<<endl;
			for (int i = 0; i< 3;i++) {
				cout << acnt[i];
			}
			return 0;
		}
		cout << "돈을 받을 학생의 학번을 입력하세요: "; cin >> inid;

		for (int i = 0; i < 3; i++) {
			if (acnt[i].getid() == outid) {
				outindex = i;
			}
			if (acnt[i].getid() == inid) {
				inindex = i;
			}
		}

		if ( (outindex == -1) or (inindex==-1) ) {
			cout << "보내는 학생 혹은 받는 학생의 학번이 존재하지 않습니다. 다시입력해주세요." << endl;
			continue;
		}
		else if (outindex==inindex) {
			cout << "보내는 학생과 받는 학생이 동일합니다." << endl;
			continue;
		}
		else if (acnt[outindex].getbalance() == 0) {
			cout << "보내는 학생의 잔액이 부족합니다" << endl;
			continue;
		}
		
		acnt[inindex] = acnt[inindex] + acnt[outindex];
		acnt[outindex] = acnt[outindex] -acnt[outindex];

		cout << "돈을 보낸 학생의 잔액 :  ";
		cout << acnt[outindex];
		cout << "돈을 받은 학생의 잔액 :  ";
		cout << acnt[inindex];
	}

	return 0; 
	
}
