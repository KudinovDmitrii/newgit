/* Programm is creating double array and putting composite number by clockwise */
#include <iostream>
#include <stdio.h>
using namespace std;
int Sost(int a) { // making composite number
	int b = 0, k = 2;
	b = a / k * k;
	for ( ; ;a++) {
		for (k = 2; k < a;k++) {
			b = a / k * k;
			if (b == a && b != k ) {
				return a;
				break;
			}
		}
	}
}
int **Array(int a, int b) {
	int ** A;
	// creation
	A = new int *[a];
	for (int i = 0; i < a; i++) {
		A[i] = new int[b];
	}
	//working
	int h = 1, t = 0, g = 0;
	int j = 0, i = 0;
	int I = i, J = j;
	int B = b - 1, R = a - 1;
	while (g < B || t < R) {
		if (J != 0) {
			t++;
		}
		for (int i = R; i >= t; i--) {
			h++;
			h = Sost(h);
			A[i][J] = h;
			I = i;
		}
		if (I != 0) {
			B--;
		}
		for (int j = g + 1; j <= B; j++) {
			h++;
			h = Sost(h);
			A[I][j] = h;
			J = j;
		}
		for (int i = t + 1; i <= R; i++) {
			h++;
			h = Sost(h);
			A[i][J] = h;
			I = i;
		}
		R--;
		g++;
		for (int j = B - 1; j >= g; j--) {
			h++;
			h = Sost(h);
			A[I][j] = h;
			J = j;
		}
	}
	


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
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
