#include <iostream>
#include <string>
using namespace std;

//2에서 있으면? 2에서삭제
//2에서 없으면? 해당 1의 문자는 삭제할문자
//남는 2? 모두 삭제


int main() {
	string word1, word2;
	int ans = 0;
	cout << "두 단어를 입력해주세요 : ";cin >> word1 >> word2;

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