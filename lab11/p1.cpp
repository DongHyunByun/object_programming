#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <class T>
void sort(T &list) {
	for (int i = 0; i < list.size()-1; i++) {
		for (int j = i + 1;j < list.size();j++) {
			if (list[i] > list[j]) {
				auto temp = list[j];
				list[j] = list[i];
				list[i] = temp;
			}
		}
	}
}

template <class T>
void print(T list) {
	typename T::iterator it;
	for (auto it = list.begin(); it != list.end() ;it++) {
		cout << *it << ", ";
	}
	cout << endl;
}

int main() {
	vector<int> int_list(5);
	int_list = { 10,5,8,1,3 };

	vector<double> double_list(5);
	double_list = { 10.1,5.1,8.1,1.1,3.1 };

	vector <string> string_list(5);
	string_list = { "하나","둘","셋","넷","다섯" };

	sort(int_list);
	sort(double_list);
	sort(string_list);

	print(int_list);
	print(double_list);
	print(string_list);
}
