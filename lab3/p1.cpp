#include <iostream>

using namespace std;

int main() {
	int num;
	while (true) {
		cout << "number : "; cin >> num;
		if (num <= 0) {
			return 0;
		}
		else {
			if (num % 2 == 1) {
				cout << num << "�� Ȧ���Դϴ�." << endl;
			}
			else {
				cout << num << "�� ¦���Դϴ�." << endl;
			}
		}
	}
}