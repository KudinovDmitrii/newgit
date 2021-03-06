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
	//vivod
	for (int i = 0; i < tops; i++) {
		cout << endl;
		for (int j = 0; j < tops; j++)
			cout << matrix[i][j] << " ";
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
	return 0;
}
