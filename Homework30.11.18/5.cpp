
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int n, k, Proizvedenie = 1, N, Proverka;
	cout << "Type N and K " << endl;
	cin >> n >> k;
	int *A = new int[n];
	cout << "Type numbers of Array " << endl;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < n; i++) {
		Proizvedenie = 1;
		N = A[i];
		while (N > 0) {
			Proverka = N % 10;
			if (Proverka) {
				Proizvedenie *= Proverka;
			}
			N /= 10;
		}
		if (Proizvedenie > k) {
			cout << A[i] << " ";
		}
	}

	delete[] A;
	return 0;
}
