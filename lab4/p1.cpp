#include <iostream>
#include <string>
using namespace std;

int main() {
	string city, area, street, building;
	string adress;

	cout << "�� : "; cin >> city;
	cout << "�� : "; cin >> area;
	cout << "�� : "; cin >> street;
	cout << "�ǹ��� : "; cin >> building;
	cout << "\n";

	adress = city + area + street + building;

	cout << "�� �ּ� : " << adress;
	
	return 0;

}
