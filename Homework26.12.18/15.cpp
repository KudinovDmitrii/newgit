//Searching for the smallest distance between two positions
#include <iostream>
#include <stdio.h>
using namespace std;
int Triceratops(int a, int b, int c, int d) {
	int DLINNNA = 999999999;
	DLINNNA = abs(a - c) + abs(b - d);
	return DLINNNA;
}
int main()
{
		int N, M;
		cin >> N >> M;
		bool **X;
		// creating
		X = new bool *[M];
		for (int i = 0; i < N; i++) {
			X[i] = new bool[N];
		}
		// working
		for (int i = 0;i < M; i++) {
			for (int j = 0; j < N; j++) {
				cin >> X[j][i];
			}
		}
		int Tirex = 999999999;
		int tirexic = Tirex;
		for (int i = 0;i < M; i++) {
		    for (int j = 0; j < N; j++) {
		     if(X[j][i] != 0)
			   for (int t = i;t < M; t++) {
				   for (int q = j; q < N; q++) {
					   if (X[q][t] != 0 && (q != j || t != i)) {
						   tirexic = Triceratops(i, j, t, q);
						   if (tirexic <= Tirex)
							   Tirex = tirexic;

					   }
		           }
			   }
		
		    }
		}
		
		cout << Tirex;






		// destroing
		for (int i = 0;i < M; i++) {
			delete[] X[i];
		}
		delete[] X;
	return 0;
}

