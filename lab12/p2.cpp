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
			cout << "���� list�� " << cnt << "�� ũ�⸦ ������ �ִ�";
			break;
		}
	}

	return 0;
}
