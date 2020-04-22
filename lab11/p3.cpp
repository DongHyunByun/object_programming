#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int num;
	cout << "홀수 숫자를 하나 입력해 주세요 : ";cin >> num;

	int **ary = new int*[num];
	for (int i = 0; i < num; i++) {
		ary[i] = new int[num];
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			ary[i][j] = 0;
		}
	}


	int count = 1;
	int row = 0;
	int col = num / 2;

	while (count <= num * num) {
		bool overRow = false;
		bool overCol = false;

		ary[row][col] = count;

		row--;
		col++;

		if (row == -1) {
			row = row + num;
			overRow = true;
		}
		if (col == num) {
			col = col - num;
			overCol = true;
		}
		if (ary[row][col] != 0) {
			if (overRow) {
				row = row - num;
			}
			if (overCol) {
				col = col + num;
			}
			row = row + 2;
			col--;
		}
		count++;
	}

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			cout << setw(8) << ary[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < num; i++) {
		delete[] ary[i];
	}
	delete[] ary;

	return 0;
}