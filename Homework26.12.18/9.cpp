//Searching for the most valuable way in the map
#include <iostream>
using namespace std;
int max(int a, int b) {
	if (a >= b)
		return a;
	else
		return b;
}
int main()
{
	int N, M;
	cin >> N >> M;
	int **X;
	// creating
	X = new int *[N];
	for (int i = 0; i < M; i++) {
		X[i] = new int[M];
	}
	// working
	for (int i = 0;i < M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> X[j][i];
		}
	}
	// pull out map
	for (int i = 0;i < M; i++) {
		for (int j = 0; j < N; j++) {
			if (i == 0) {
				if (j == 0)
					X[j][i] = X[j][i];
				if (j != 0)
					X[j][i] += X[j-1][i];
			}
			else if (j == 0)
			X[j][i] += X[j][i - 1];
				else 
					X[j][i] += max(X[j-1][i], X[j][i - 1]);
		}
	}


	cout << X[N -1 ][M - 1];




	// destroing
	for (int i = 0;i < N; i++) {
		delete[] X[i];
	}
	delete[] X;
	return 0;
}

