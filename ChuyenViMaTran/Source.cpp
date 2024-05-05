#include "iostream"
using namespace std;
const int MAX = 20;

struct matrix {
	int array[MAX][MAX];
	int row, col;
};

void inputMatrix(matrix& m) {
	cout << "Enter row and colum: ";
	cin >> m.row >> m.col;
	for (int i = 0; i < m.row; i++) {
		for (int j = 0; j < m.col; j++) {
			cout << "array[" << i << "][" << j << "]= ";
			cin >> m.array[i][j];
		}
	}
}

void outputMatrix(matrix m) {
	cout << "\nMATRIX: " << endl;
	for (int i = 0; i < m.row; i++) {
		for (int j = 0; j < m.col; j++) {
			cout << m.array[i][j] << " ";
		}
		cout << endl;
	}
}

// Chuyển vị ma trận || kiểm tra ma trận đối xứng 
void matrixTransposition(matrix& m) {
	// Chuyển thành ma trận vuông 
	int newRowCol = max(m.row, m.col);
	for (int i = 0; i < newRowCol; i++) {
		for (int j = 0; j < i; j++) {
			swap(m.array[i][j], m.array[j][i]);
		}
	}
	swap(m.row, m.col);
}

int main() {
	matrix m;
	inputMatrix(m);
	outputMatrix(m);

	cout << "\nMatrix after transposition: ";
	matrixTransposition(m);
	outputMatrix(m);
}