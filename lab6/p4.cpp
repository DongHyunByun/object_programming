#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
private:
	string name;
	int id;
	string major;
	vector<string> majorVec; 
	vector<char> gradeVec;   

public:
	Student(string inputName, int num, string inputMajor) {
		name = inputName;
		id = num;
		major = inputMajor;
	}
	Student() :name("default"), id(0), major("depart") {
	}

	void setname(string word) {
		name = word;
	}
	void setId(int num) {
		id = num;
	}
	void setdept(string word2) {
		major = word2;
	}
	void print() {
		cout << name << " " << id << " " << major << endl;
	}
	void addGrade(string klas, char grade) {
		majorVec.push_back(klas);
		gradeVec.push_back(grade);
	}
	void printGrades() {
		for (int i = 0; i < majorVec.size(); i++) {
			cout << majorVec[i] << " " << gradeVec[i] << endl;
		}
		cout << "GPA : " << getGPA();
	}
	float getGPA() {
		float sum = 0;
		for (int i = 0; i < gradeVec.size(); i++) {
			switch (gradeVec[i]) {
			case 'A':
				sum += 4;
				break;
			case 'B':
				sum += 3;
				break;
			case 'C':
				sum += 2;
				break;
			case 'D':
				sum += 1;
				break;
			case 'F':
				sum += 0;
				break;
			}
		}
		return sum / gradeVec.size();
	}
	void getYear(int year) {
		string strid = to_string(id);
		int yearOfId = stoi(strid.substr(0, 4));
		int grade = year - yearOfId + 1;

		if (grade == 1) {
			cout << "Freshmen(1학년)";
		}
		else if (grade == 2) {
			cout << "Sophomore(2학년)";
		}
		else if (grade == 3) {
			cout << "Junior(3학년)";
		}
		else if (grade == 4) {
			cout << "Senior(4학년)";
		}
		else {
			cout << "About to graduate(5학년)";
		}
		cout << endl;
	}
};

int main() {
	Student Harry("Harry", 2017310973, "CS");
	Harry.print();
	Harry.getYear(2019);
	Harry.addGrade("programming", 'A');
	Harry.addGrade("Basic Circuit", 'B');
	Harry.printGrades();
	cout << "\n\n";

	Student ron;
	ron.print();
	cout << "\n";
	ron.setname("Ron");
	ron.setId(2014103959);
	ron.setdept("EE");
	ron.print();
	ron.getYear(2019);
	ron.addGrade("Computer Architecture", 'B');
	ron.addGrade("Maching Learning", 'B');
	ron.addGrade("Computer Vision", 'C');
	ron.printGrades();

	return 0;
}
