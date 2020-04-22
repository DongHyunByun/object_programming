#include <iostream>

using namespace std;

int main() {
	int num;
	int sum = 0;
	cout << "number : "; cin >> num;
	while (num < 1) {
		cout << "1 이상의 정수를 입력하시오." << endl;
		cin >> num;
	}
	for (int i = 1;i <= num;i++) {
			sum += i;
		}
		cout << sum;
		return 0;
}
