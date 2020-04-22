#include <iostream>

using namespace std;

void get_data(int&x, int&y) {
	cout << "x �Է� : "; cin >> x;
	cout << "y �Է� : "; cin >> y;
	cout << endl;
}

void swap_call_by_value(int x, int y) {
	int tem;
	tem = x;
	x = y;
	y = tem;
}

void swap_call_by_reference(int&x, int&y) {
	int tem;
	tem = x;
	x = y;
	y = tem;
}

int main() {
	int x, y;
	get_data(x, y);

	cout << "swap_call_by_value �Լ� ��� ��" << endl;
	cout << "x = " << x << ", y = " << y << endl;
	swap_call_by_value(x, y);
	cout << "swap_call_by_value �Լ� ��� ��" << endl;
	cout << "x = " << x << ", y = " << y << endl;

	cout << endl;

	cout << "swap_call_by_reference �Լ� ��� ��" << endl;
	cout << "x = " << x << ", y = " << y << endl;
	swap_call_by_reference(x, y);
	cout << "swap_call_by_reference �Լ� ��� ��" << endl;
	cout << "x = " << x << ", y = " << y << endl;


	return 0;

}