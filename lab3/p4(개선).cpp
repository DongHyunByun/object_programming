#include <iostream>

using namespace std;

int main() {
	int n;
	while (true) {
		cout << "number : "; cin >> n;
		if (n < 1 or n>9) {
			return 0;
		}
		for (int i = 1;i <= 9;i++) {
			cout << n << "*" << i << " = " << n * i << "  ";
		}
		cout << endl;
	}
	return 0;
}