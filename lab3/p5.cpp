#include <iostream>

using namespace std;

int gcd(int a, int b) {
	int r;
	r = a % b;
	if (r == 0) {
		return b;
	}
	else {
		return gcd(b, r);
	}
}

int main() {
	int a, b,tem;
	cin >> a;
	cin >> b;
	if (a < b) {
		tem = a;
		a = b;
		b = tem;
	}

	cout << "gcd(" << a << "," << b << ") = " << gcd(a, b);
	return 0;
}
