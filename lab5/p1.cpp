#include <iostream>

using namespace std;


void conToSq(int *p) {
	cout <<"������> "<< (*p)*(*p);
}

int main() {
	int num;
	cout << "input> "; cin >> num;
	conToSq(&num);
}