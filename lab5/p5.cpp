#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void makeMat(vector<vector<int>> &mat, int row, int col) {
	for (int i = 0; i < row;i++) {
		for (int j = 0; j < col;j++) {
			mat[i][j] = rand() % 19 - 9;
		}
	}
}

bool mulMat(vector<vector<int>> &mat, vector<vector<int>> &mat2, vector<vector<int>> &mat3) {
	int a = mat.size();
	int b = mat2.size();
	int c = mat3[0].size();
	int sum;

	if (mat[0].size() == mat2.size()) {
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < c; j++) {
				for (int k = 0; k < b; k++) {
					mat3[i][j] += mat[i][k] * mat2[k][j];
				}
			}
		}
		return true;
	}
	else
		return false;
}

void print(vector<vector<int>> mat) {
	for (int i = 0; i < mat.size(); i++) {
		for (int j = 0; j < mat[0].size(); j++) {
			cout << setw(4) << mat[i][j];
		}
		cout << endl;
	}
}

int main() {
	int a_row, a_col, b_row, b_col;
	

	cout << "A�� ��, ���� ũ�⸦ �Է����ּ��� : "; cin >> a_row >> a_col;
	cout << "B�� ��, ���� ũ�⸦ �Է����ּ��� : "; cin >> b_row >> b_col;
	cout << endl;
	vector<vector<int>> A(a_row, vector<int>(a_col));
	vector<vector<int>> B(b_row, vector<int>(b_col));
	vector<vector<int>> C(a_row, vector<int>(b_col));

	makeMat(A, a_row, a_col);
	makeMat(B, b_row, b_col);

	cout << "A ��� : " << endl;
	print(A);
	cout << endl;

	cout << "B ��� : " << endl;
	print(B);
	cout << endl;

	if (mulMat(A, B, C)==false) {
		cout << "�� ����� ���� �� �����ϴ�.";
		return 0;
	}

	cout << "AB ��� : " << endl;
	print(C);

	return 0;
}