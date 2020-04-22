#include <iostream>

using namespace std;

int main() {
	int len;
	while (1) {
		bool isTrue = true;
		cout << "Please enter number of values to process : "; cin >> len;
		if (len < 1)
			return 0;
		else {
			cout << "Please enter numbers : ";
			int *p = new int[len];
			for (int i = 0; i < len;i++) {
				cin >> p[i];
			}
			for (int i = 0; i < len; i++) {
				if (p[i] > len or p[i] < 1) {
					isTrue = false;
					cout << "False" << endl;
					break;
				}
				for (int j = i + 1; j < len; j++) {
					if (p[i] == p[j]) {
						cout << "False" << endl;
						isTrue = false;
						break;
					}
				}
				if (isTrue == false)
					break;
			}
			if(isTrue==true)
				cout << "true" << endl;
			cout << endl;
		}

	}
}