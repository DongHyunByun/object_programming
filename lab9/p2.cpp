#include <iostream>
#include <string>
using namespace std;

//2���� ������? 2��������
//2���� ������? �ش� 1�� ���ڴ� �����ҹ���
//���� 2? ��� ����


int main() {
	string word1, word2;
	int ans = 0;
	cout << "�� �ܾ �Է����ּ��� : ";cin >> word1 >> word2;

	for (int i = 0; i < word1.size(); i++) {
		bool in2 = false;
		for (int j = 0; j < word2.size(); j++) {
			if (word1[i] == word2[j]) {
				word2.erase(word2.begin()+j);
				in2 = true;
				break;
			}
		}
		if (in2 == true) {
			continue;
		}
		else {
			ans++;
		}
	}
	ans += word2.size();
	cout << ans;
}