#include <iostream>


using namespace std;


class Train {
protected:
	int mPeople;
public:
	Train() {}
	Train(int people) {
		mPeople = people;
	}
	~Train() {}

	virtual int station(int takeOff, int takeOn) {
		return mPeople;
	};
};

class Ktx : public Train
{
public:
	Ktx() : Train(0) {}
	Ktx(int people) : Train(people) {}
	~Ktx() {}

	int station(int takeOff, int takeOn) {
		mPeople += takeOn;
		mPeople -= takeOff;

		return mPeople;
	}

	int getPeople() {
		return mPeople;
	}
};

int main() {
	int innum, outnum, maxnum=0;
	Ktx k;

	for (int i = 1; i <= 5; i++) {
		cout << i << "번째역 : "; cin >> innum >> outnum;
		k.station(innum, outnum);
		if (k.getPeople() > 300) {
			cout << "정원초과입니다";
			return 0;
		}
		else if(k.getPeople() < 0) {
			cout << "정원미달입니다";
			return 0;
		}
		else {
			if (k.getPeople() > maxnum) {
				maxnum = k.getPeople();
			}
		}
	}
	cout << "가장 많은 사람이 탑승 했을 때의 사람 수 = " << maxnum;

	return 0;
}
