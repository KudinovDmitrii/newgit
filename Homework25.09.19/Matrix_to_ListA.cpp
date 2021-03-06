#include <iostream>
using namespace std;

void MatrixA_to_ListA(bool** used, int size, int** &listA) {
	//creating
	listA = new int*[size];
	for (int i = 0; i < size; i++)
		listA[i] = new int[size];
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++) {
			if (j == 0) {
				listA[i][j] = i + 1;
			}
			else
				listA[i][j] = 0;
		}
	int t = 0;
	//working
	for (int j = 0; j < size; j++) {
		for (int i = 0; i < size; i++) {
			if (used[j][i] == 1) {
				t++;
				listA[j][t] = i + 1;
			}
		}
		t = 0;
	}
	//vivod
	for (int i = 0; i < size; i++) {
		cout << endl;
		for (int j = 0; j < size; j++)
			cout << listA[i][j] << " ";
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
	
	int** listA;
	MatrixA_to_ListA(used, size, listA);

	return 0;
}


