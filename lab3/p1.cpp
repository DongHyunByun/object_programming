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
				cout << num << "은 홀수입니다." << endl;
			}
			else {
				cout << num << "은 짝수입니다." << endl;
			}
		}
	}
}