#include <iostream>

using namespace std;

int main() {
	int n=1;
	while (n >= 1 && n <= 9) {
		cout << "number : ";cin >> n;
		if (n > 9 || n < 1) {
			return 0;
		}
		for (int i = 1; i <= 9;i++) {
			cout << n << "*" << i << " = " << n * i << "  ";
		}
		cout << endl;
	}
}
