#include <iostream>
#include<queue>
using namespace std;

void listE_to_Matrix(int **listE, int edges, bool** &matrix) {
	int* tops = new int[edges * 2];
	for (int j = 0; j < edges * 2; j++)
		tops[j] = 0;
	int t = 0;
	//filling
	for (int i = 1; i < 3; i++)
		for (int j = 0; j < edges; j++)
			for (int k = 0; k < edges * 2 && tops[k] != listE[i][j]; k++)
				if (k == edges * 2 - 1) {
					tops[t] = listE[i][j];
					t++;
				}
	//working
	matrix = new bool*[t];
	for (int i = 0; i < t; i++) {
		matrix[i] = new bool[t];
		for (int j = 0; j < t; j++)
			matrix[i][j] = 0;
	}
	for (int i = 0; i < t; i++)
		for (int j = 0; j < t; j++) {
			if (i == j)
				matrix[i][j] = 0;
			else
				for (int y = 0; y < edges; y++) {
					if (((listE[1][y] == i + 1) && (listE[2][y] == j + 1)) || ((listE[1][y] == j + 1) && (listE[2][y] == i + 1))) {
						matrix[i][j] = 1;
						matrix[j][i] = 1;
					}
				}
		}

	for (int i = 0; i < t; i++) {
		cout << endl;
		for (int j = 0; j < t; j++) {
			cout << matrix[i][j] << " ";
		}
	}
}

int main()
{
	//enter edge(adjacency) list 
	int edges;
	cout << "type the number of edges" << endl;
	cin >> edges;
	int **listE;
	listE = new int*[3];
	for (int i = 0; i < 3; i++)
		listE[i] = new int[edges];
	cout << "type the list of edges" << endl;
	for (int j = 0; j < edges; j++)
		for (int i = 0; i < 3; i++) {
			if (i == 0)
				listE[i][j] = j + 1;
			else
				cin >> listE[i][j];
		}
	bool **matrix;
	listE_to_Matrix(listE, edges, matrix);
	return 0;
}
