#include <iostream>

using namespace std;


void conToSq(int *p) {
	cout <<"Á¦°ö°ª> "<< (*p)*(*p);
}

int main() {
	int num;
	cout << "input> "; cin >> num;
	conToSq(&num);
}