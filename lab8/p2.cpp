#include <iostream>

using namespace std;

class Polygon {
protected:
	int mPoint;
	double mLength;

public:
	Polygon() {}
	Polygon(int point, float length) {
		mPoint = point;
		mLength = length;
	}
	~Polygon() {}

	virtual void calcGirth() {
		cout << "Girth : empty" << endl;
	}
	virtual void calcArea() {
		cout << "Area : empty" << endl;
	}
};


class Triangle : public Polygon {
public:
	Triangle(int p, int len) : Polygon(p, len) {};
	void calcGirth() override {
		cout << "Girth : " << mPoint * mLength<<endl;
	}
	void calcArea() override {
		cout << "Area : " << (sqrt(3)*pow(mLength, 2)) / 4<<endl;
	}
};

class Rectangle : public Polygon {
public:
	Rectangle(int p, int len) : Polygon(p, len) {};
	void calcGirth() override {
		cout << "Girth : " << mPoint * mLength<<endl;
	}
	void calcArea() override {
		cout << "Area : " << mLength*mLength<<endl;
	}
};

class Circle : public Polygon {
public:
	Circle(int p, int len) : Polygon(p, len) {};
	void calcGirth() override {
		cout << "Girth : " << 2 * mLength*3.14<<endl;
	}
	void calcArea() override {
		cout << "Area : " << pow(mLength,2)*3.14<<endl;
	}
};


int main() {
	
	Triangle tri(3, 10);
	Rectangle rec(4, 10);
	Circle cir(0, 5);

	cout << "--- Triangle class ---" << endl;
	tri.calcGirth();
	tri.calcArea();
	cout << "--- Rectangle class ---" << endl;
	rec.calcGirth();
	rec.calcArea();
	cout << "--- Circle class ---" << endl;
	cir.calcGirth();
	cir.calcArea();

	return 0;
}