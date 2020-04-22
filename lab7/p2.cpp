#include <iostream>
#include <string>
#include <cmath>


using namespace std;

class Point {

private:
	int x, y;

public:
	Point(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
	Point operator-(const Point&p) {
		Point result(this->x - p.getX(), this->y - p.getY());
		return result;
	}
	Point operator*(const Point&p) {
		Point result(this->x * p.getX() , this->y * p.getY());
		return result;
	}

	void setPoint(int x, int y) {
		this->x = x;
		this->y = y;
	}

	int getX() const{
		return x;
	}
	int getY() const{
		return y;
	}

	
};

int main() {

	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	Point *pP1, *pP2, *pP3;

	cout << "첫번째 좌표[x1,y1]를 입력하세요 : ";
	cin >> x1 >> y1;

	cout << "두번째 좌표[x1,y1]를 입력하세요 : ";
	cin >> x2 >> y2;

	pP1 = new Point(x1, y1);
	pP2 = new Point(x2, y2);
	
	pP3 = new Point();


	*pP3= (*pP1 - *pP2)*(*pP1-*pP2);

	cout<<"두 좌표 사이의 길이는 "<<sqrt((*pP3).getX()+(*pP3).getY())<<"입니다"<<endl;
	
	
	
	

	return 0;
}
