#include <iostream>

using namespace std;

int main() {
	int n;
	int sum = 0;
	cout << "number : "; cin >> n;
	for (int i = 1;i <= n;i++) {
		if (i % 2 == 0 or i % 3 == 0)
			continue;
		sum += i;
	}
	cout << "sum : " << sum;
	return 0;
}
