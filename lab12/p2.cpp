#include <iostream>
#include <vector>

using namespace std;

int main() {
	int vecSize= rand() % 100 + 1;
	vector<int> list;
	list.resize(vecSize);
	for (int i = 0; i < vecSize; i++) {
		list[i] = i;
	}
	int cnt = -1;
	while (1) {
		cnt++;
		try {
			list.at(cnt);
		}
		catch (exception& e) {
			cout << "현재 list는 " << cnt << "의 크기를 가지고 있다";
			break;
		}
	}

	return 0;
}
