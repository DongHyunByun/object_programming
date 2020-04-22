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
	cout << "첫번째 x : "; cin >> x1;
	cout << "첫번째 y : "; cin >> y1;
	cout << "두번째 x : "; cin >> x2;
	cout << "두번째 x : "; cin >> y2;
	cout << endl;
}

template <class T>
void Point<T>::print(void) {
	cout << "두점 사이의 거리 = " << (T)sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}
/*void Point<float>::print(void) {
	cout << "두점 사이의 거리 = " << sqrtf((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
}
void Point<int>::print(void) {
	cout << "두점 사이의 거리 = " << floor(sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)));
}*/


int main() {
	Point<int> p;

	p.setPointFromKeybord();
	p.print();

	return 0;
}
