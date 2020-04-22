#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;


int main() {
	int n1, n2, n3, strike, ball;
	srand((unsigned int)time(NULL));

	//랜덤숫자
	vector<int> comV,myV(3);
	
	comV.push_back(rand() % 9 + 1);
	for (int i = 1;i <= 2;i++) {
		while(1) {
			bool same = false;
			comV.push_back(rand()%9+1);
			for (int j = 0; j <= comV.size()-2 ;j++) {
				if (comV[i] == comV[j]) {
					comV.pop_back();
					same = true;
					break;
				}
			}
			if (same == true) {
				continue;
			}
			else {
				break;
			}
		}
	}


	//게임시작
	for (int i = 1; i <= 9; i++) {
		strike=0, ball=0;

		cout << "================" << i << "================" << endl;
		

		while (1) {
			
			cout << "1 ~ 9 범위의 숫자 세개를 입력해 주세요 : ";cin >> myV[0] >> myV[1] >> myV[2];

			//범위?
			bool canbreak = true;
			for (int i = 0; i < 3;i++) {
				if (myV[i] >= 10 or myV[i] <= 0) {
					canbreak = false;
					break;
				}
			}
			if (canbreak == false) {
				cout << "1 ~ 9 범위 내의 숫자를 입력하여 주세요." << endl;
				continue;
			}
			//중복?
			if ( (myV[0] == myV[1]) or (myV[0] == myV[2]) or (myV[1] == myV[2]) ) {
				cout << "중복된 숫자를 입력하셨습니다." << endl;
				continue;
			}
			
			break;
		}

		//strike?
		for (int j = 0; j < 3; j++) {
			if (comV[j] == myV[j]) {
				strike ++;
			}
		}

		//ball?
		for (int j = 0;j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				if (comV[j] == myV[k] and j!=k) {
					ball++;
					break;
				}
			}
		}

		if (strike == 0 and ball == 0) {
			cout << "Out!!" << endl;
		}
		else {
			cout << strike << " Strike, " << ball << " Ball" << endl << endl;
			if (strike == 3) {
				cout << "정답입니다!";
				break;
			}
			
		}
	}

	return 0;
}
