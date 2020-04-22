#include <iostream>
#include <string>
using namespace std;

int main() {
	string city, area, street, building;
	string adress;

	cout << "시 : "; cin >> city;
	cout << "구 : "; cin >> area;
	cout << "로 : "; cin >> street;
	cout << "건물명 : "; cin >> building;
	cout << "\n";

	adress = city + area + street + building;

	cout << "집 주소 : " << adress;
	
	return 0;

}
