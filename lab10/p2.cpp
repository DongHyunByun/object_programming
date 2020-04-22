#include <iostream>
#include <vector>

using namespace std;


int main() {
	vector<int> vec1;
	vector<int> vec2;
	int max1 = -1, max2 = 0, min1 = 21, min2 = 21;

	for (int i = 0;i < 10;i++) {
		vec1.push_back(rand() % 11);
		vec2.push_back(rand() % 21);
	}

	/*
	vector<int>::iterator it1;
	vector<int>::iterator it2;
	*/

	for (vector<int>::iterator it1 = vec1.begin(); it1 != vec1.end(); it1++) {
		if (*it1 > max1) {
			max1 = *it1;
		}
		else if (*it1 < min1) {
			min1 = *it1;
		}
	}

	for (vector<int>::iterator it2 = vec2.begin(); it2 != vec2.end(); it2++) {
		if (*it2 > max2) {
			max2 = *it2;
		}
		else if (*it2 < min2) {
			min2 = *it2;
		}
	}

	cout << "<vector 1>" << endl;
	for (auto it1 = vec1.begin(); it1 != vec1.end(); it1++) {
		cout << *it1 << " ";
	}
	cout << endl;
	cout << "<vector 2>" << endl;
	for (auto it2 = vec2.begin(); it2 != vec2.end(); it2++) {
		cout << *it2 << " ";
	}
	cout << endl;
	cout << endl;
	cout << "ÃÖ´ñ°ª = " << max1 * max2 << endl;
	cout << "ÃÖ¼Ú°ª = " << min1 * min2;

	return 0;
}