#include <iostream>

using namespace std;

template <class T>

class Point {
public:
	T x1; T y1;
	T x2; T y2;

public:
	void setPointFromKeybord(void);
	void print(void);
};


template <class T>
void Point<T>::setPointFromKeybord(void)  {
	cout << "ù��° x : "; cin >> x1;
	cout << "ù��° y : "; cin >> y1;
	cout << "�ι�° x : "; cin >> x2;
	cout << "�ι�° x : "; cin >> y2;
	cout << endl;
}

template <class T>
void Point<T>::print(void) {
	cout << "���� ������ �Ÿ� = " << (T)sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}
/*void Point<float>::print(void) {
	cout << "���� ������ �Ÿ� = " << sqrtf((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}
void Point<int>::print(void) {
	cout << "���� ������ �Ÿ� = " << floor(sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)));
}*/


int main() {
	Point<int> p;

	p.setPointFromKeybord();
	p.print();

	return 0;
}
