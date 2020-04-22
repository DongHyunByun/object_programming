#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class FileNotFoundException : public exception {
private:
	string message;
public:
	FileNotFoundException(const string& fname) : message("File \"" + fname + "\" not found") {}
	virtual const char* what() const throw() {
		return message.c_str();
	}
};

class CStudent {
public:
	CStudent() {}
	~CStudent() {}

	void setName(string n) { m_Name = n; }
	string getName() { return m_Name; }

	void setNumber(int n) { m_Number = n; }
	int getNumber() { return m_Number; }

	void setMajor(string n) { m_Major = n; }
	string getMajor() { return m_Major; }

	void setAll(string name, int number, string major)
	{
		m_Name = name;
		m_Number = number;
		m_Major = major;
	}

	void Display()
	{
		cout << "이름 : " << m_Name << "\n";
		cout << "학번 : " << m_Number << "\n";
		cout << "전공 : " << m_Major << "\n\n";
	}

private:
	string m_Name;
	int m_Number;
	string m_Major;

};

vector<CStudent> read_file(string& filename) {
	ifstream fin(filename);
	vector<CStudent> V;
	if (fin.good()) {
		while (!fin.eof()) {
			string name, major;
			int number;
			CStudent temp;

			fin >> name >> number >> major;
			temp.setName(name);
			temp.setNumber(number);
			temp.setMajor(major);

			V.push_back(temp);
			return V;
		}
	}
	else
		throw FileNotFoundException(filename);
}

int main() {
	string str;
	cout << "파일이름: ";
	cin >> str;

	try {
		vector<CStudent> numbers = read_file(str);
		for (CStudent value : numbers)
			value.Display();
	}
	catch (exception & e) {
		cout << e.what() << '\n';
	}
	return 0;
}



