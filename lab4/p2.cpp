#include <iostream>
#include <string>

using namespace std;

int main() {
	string word;
	string ans;
	string database = "������α׷������ڻ���ǹٺ����뿪õ���ǻ�������ü����";

	cout << "Ű���� : "; cin >> word;

	if (database.substr(0, 4).find(word) <= 3) {
		ans += "��� ";
	}
	if (database.substr(4, 10).find(word) <= 9) {
		ans += "���α׷��� ";
	}
	if (database.substr(14, 4).find(word) <= 3) {
		ans += "���� ";
	}
	if (database.substr(18, 10).find(word) <= 9) {
		ans += "����ǹٺ� ";
	}
	if (database.substr(28, 6).find(word) <= 5) {
		ans += "���뿪 ";
	}
	if (database.substr(34, 10).find(word) <= 9) {
		ans += "õ���ǻ�� ";
	}
	if (database.substr(44, 6).find(word) <= 5) {
		ans += "����� ";
	}
	if (database.substr(50, 8).find(word) <= 7) {
		ans += "��ü���� ";
	}

	cout << "�˻���� : " << ans;
	return 0;

}
