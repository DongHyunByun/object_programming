#include <iostream>
using namespace std;

void print_DOB(int year = 2000, int month = 1, int day = 1) {
	cout << "���� ��������� " << year << "�� " << month << "�� " << day << "�� �Դϴ�." << endl;
}
int main() {
	int x, y, z;
	print_DOB();

	cout << "year �Է� : "; cin >> x;
	cout << "month �Է� : "; cin >> y;
	cout << "day �Է� : "; cin >> z;

	print_DOB(x, y, z);

	return 0;
}