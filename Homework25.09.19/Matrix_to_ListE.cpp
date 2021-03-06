#include <iostream>
using namespace std;

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
	//enter adjacency matrix
	int number_of_tops;
	cout << "type the number of tops" << endl;
	cin >> number_of_tops;
	int size = number_of_tops;
	bool **used;
	used = new bool*[size];
	for (int i = 0; i < size; i++)
		used[i] = new bool[size];
	cout << "type the matrix" << endl;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			cin >> used[i][j];

	int **listE;
	MatrixA_to_ListE(used, size, listE);

	return 0;
}


