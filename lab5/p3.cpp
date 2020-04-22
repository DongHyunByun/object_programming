#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<int>& v) {
	int temp ;
	int size = v.size();
	for (int i = 0; i <= size / 2 - 1;i++) {
		temp = v[i];
		v[i] = v[size - 1 - i];
		v[size - 1 - i] = temp;
	}
}

int main() {
	vector<int> vec(10);
	for (int i = 0;i < 10;i++) {
		vec[i] = i+1;
	}

	cout << "기본 Vector 값 :" << endl;
	cout << "\t";
	for (int a : vec) {
		cout << a << " ";
	}
	cout << endl << endl;

	reverse(vec);

	cout << "함수 실행 후 Vector 값 :" << endl;
	cout << "\t";
	for (int a : vec) {
		cout << a << " ";
	}

}