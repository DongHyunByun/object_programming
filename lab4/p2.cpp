#include <iostream>
#include <string>

using namespace std;

int main() {
	string word;
	string ans;
	string database = "사랑프로그래밍의자사랑의바보영통역천년의사랑냉장고객체지향";

	cout << "키워드 : "; cin >> word;

	if (database.substr(0, 4).find(word) <= 3) {
		ans += "사랑 ";
	}
	if (database.substr(4, 10).find(word) <= 9) {
		ans += "프로그래밍 ";
	}
	if (database.substr(14, 4).find(word) <= 3) {
		ans += "의자 ";
	}
	if (database.substr(18, 10).find(word) <= 9) {
		ans += "사랑의바보 ";
	}
	if (database.substr(28, 6).find(word) <= 5) {
		ans += "영통역 ";
	}
	if (database.substr(34, 10).find(word) <= 9) {
		ans += "천년의사랑 ";
	}
	if (database.substr(44, 6).find(word) <= 5) {
		ans += "냉장고 ";
	}
	if (database.substr(50, 8).find(word) <= 7) {
		ans += "객체지향 ";
	}

	cout << "검색결과 : " << ans;
	return 0;

}
