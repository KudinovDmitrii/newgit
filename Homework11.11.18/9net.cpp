﻿

/* set mines and show play ground */
#include <iostream>
using namespace std;

void set(int** &A, int a, int b)
{
	int x, y;
	cout << "TYPE X AND Y " << endl;
	cin >> x >> y;
	A[x][y] = -1;
}


void detector(int** &A, int a, int b) { //detecting mines

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
int main()
{
	int m, n;
	int g;
	cin >> g >> m >> n;
	while (g < 10) {
		int** pole = new int*[m];
		for (int i = 0; i < m; i++)
		{
			*(pole + i) = new int[n];
		}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				pole[i][j] = 0;
			}
		}
		set(pole, m, n);
		detector(pole, m, n);
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cout << pole[i][j] << " ";
			}
			cout << endl;
		}
		cout << "TYPE G <10 TO CONTINUE" << endl;
		cin >> g;
	}


	
	
	return 0;
}
