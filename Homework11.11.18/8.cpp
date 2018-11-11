
/* Play ground for sapper, minning and detecting */
#include <iostream>
using namespace std;
void mines(int** &A, int a, int b) {    // making mines with 1/7 chance
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			int k = rand() % 7 + 1;
				if (k == 5) {
					A[i][j] = -1;
				}
		}
	}
}
void detector(int** &A,int a, int b) { //detecting mines
	
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (A[i][j] == -1) continue;
			int p = 0;
			int x = i, y = j;
			if (x > 0) { x--; };
			if (y > 0) { y--; };
			int x_ = x, y_ = y;
			while ((x_ <= (a - 1)) && ((x_ - i) <= 1))
			{
				while ((y_ <= (b - 1)) && ((y_ - j) <= 1))
				{
					if (A[x_][y_] == -1) { p++; };
					y_++;
				};
				y_ = y;
				x_++;
			}
			A[i][j] = p;
		}
	}
}
int **Array(int a, int b) { // Array function
	int ** A;
	// creation
	A = new int *[a];
	for (int i = 0; i < a; i++) {
		A[i] = new int[b];
	}
	//working
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			A[i][j] = 0;
		}
	}
	mines(A, a, b);
	detector(A, a, b);

	return A;
	//destroing
	for (int i = 0;i < a; i++) {
		delete[] A[i];
	}
	delete[] A;
}

int main()
{
	int a, b;
	cin >> a >> b;

	int **A = Array(a, b);




	//pull out
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (A[i][j] == -1) {
				cout << "* ";  //our mines will be * instead -1
			}
			else {
				cout << A[i][j] << " ";
			}
		}
		cout << endl;
	}

	return 0;
}
