#include <iostream>
using namespace std;

void ListA_to_Matrix(int** listA, int tops, bool** &matrix) {
	//creating
	matrix = new bool*[tops];
	for (int i = 0; i < tops; i++)
		matrix[i] = new bool[tops];
	for (int j = 0; j < tops; j++)
		for (int i = 0; i < tops; i++)
			matrix[i][j] = 0;

	for (int i = 0; i < tops; i++)
		for (int j = 0; j < tops; j++) {
			if (i != j)
				for (int y = 1; y < tops; y++)
					if (listA[y][j] == i + 1) {
						matrix[i][j] = 1;
						matrix[j][i] = 1;
					}

		}
}

void MatrixA_to_ListE(bool** used, int size, int** &listE) {
	bool **used1 = used;
	//creating demo ListE
	int N = size * (size - 1);
	int **demo_listE;
	demo_listE = new int*[3];
	for (int i = 0; i < N; i++) {
		demo_listE[i] = new int[3];
	}
	int t = 0;
	//working
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++) {
			if (used1[i][j] == 1) {
				used1[j][i] = 0;
				demo_listE[1][t] = i + 1;
				demo_listE[2][t] = j + 1;
				t++;
			}
		}

	//vivod
	listE = new int*[3];
	for (int i = 0; i < t; i++)
		listE[i] = new int[3];

	for (int i = 0; i < t; i++) {
		listE[0][i] = i + 1;
		listE[1][i] = demo_listE[1][i];
		listE[2][i] = demo_listE[2][i];
	}

	for (int i = 0; i < t; i++) {
		cout << endl;
		for (int j = 0; j < 3; j++)
			cout << listE[j][i] << " ";
	}
}

int main()
{
	//enter adjacency list 
	int tops;
	cout << "type the number of tops" << endl;
	cin >> tops;
	int **listA;
	listA = new int*[tops];
	for (int i = 0; i < tops; i++)
		listA[i] = new int[tops];
	cout << "type the list adjacency line by line" << endl;
	for (int j = 0; j < tops; j++) {
		for (int i = 0; i < tops; i++) {
			if (j == 0)
				listA[j][i] = i + 1;
			else
				cin >> listA[j][i];
		}
	}

	bool **matrix;
	ListA_to_Matrix(listA, tops, matrix);

	int **listE;
	MatrixA_to_ListE(matrix, tops, listE);


	return 0;
}



