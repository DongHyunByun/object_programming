#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	int id;
	string department;
	int grade;
	int credit;

public:
	Student(string n = "default", unsigned int i = 0, string d = "default", int g = 0, int c = 0) :name(n), id(i), department(d), grade(g), credit(c) {}
	void virtual print() {
		cout << "I'm student" << endl;
		cout << endl;
	}
	string getname() {
		return name;
	}
	int getid() {
		return id;
	}
	string getdepartment() {
		return department;
	}
	int getgrade() {
		return grade;
	}
	int getcredit() {
		return credit;
	}

	void setname(string _name) {
		name = _name;
	}
	void setid(int _id) {
		id = _id;
	}
	void setdepartment(string _department) {
		department = _department;
	}
	void setgrade(int _grade) {
		grade = _grade;
	}
	void setcredit(int _credit) {
		credit = _credit;
	}
};

class Graduate : public Student{
private:
	double scholor;
	bool type;

public:
	Graduate(string _name, int _id, string _department, int _grade, int _credit, bool _type, double _scholor) : Student(_name, _id, _department, _grade, _credit), type(_type), scholor(_scholor) {}
	void print() override{
		cout << "===================================" << endl;
		cout << "이    름 : " << getname() << endl;
		cout << "학    번 : " << getid() << endl;
		cout << "소속학과 : " << getdepartment() << endl;
		cout << "학    년 : " << getgrade() << endl;
		cout << "이수학점 : " << getcredit() << endl;
		cout << "조교유형 : ";
		if (type == false) {
			cout << "연구조교" << endl;
		}
		else {
			cout << "교육조교" << endl;
		}
		cout << "장학비율 : " << scholor << endl;
		cout << "===================================" << endl;
	}
};

class Undergraduate : public Student {
private:
	string club;

public:
	Undergraduate(string _name, int _id, string _department, int _grade, int _credit, string _club) : Student(_name, _id, _department, _grade, _credit), club(_club) {}
	void print() override {
		cout << "===================================" << endl;
		cout << "이    름 : " << getname() << endl;
		cout << "학    번 : " << getid() << endl;
		cout << "소속학과 : " << getdepartment() << endl;
		cout << "학    년 : " << getgrade() << endl;
		cout << "이수학점 : " << getcredit() << endl;
		cout << "동아리명 : " << club << endl;
		cout << "===================================" << endl;
	}
};

int main() {
	Student Std;
	Graduate Kang("강석원", 2018311025, "컴퓨터공학과", 1, 18, false, 0.5);
	Undergraduate Hong("홍길동", 20141111, "컴퓨터공학과", 2, 80, "알고리즘동아리");

	Std.print();
	Kang.print();
	Hong.print();
	
	return 0;
}
