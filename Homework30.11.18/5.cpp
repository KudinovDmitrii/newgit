
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int n, k, P = 1,N , t, m;
	cout << "Type N and K ";
	cin >> n >> k;
	int *A = new int[n];
	cout << "Type numbers of Array ";
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < n; i++) {
		P = 1;
		 t = 1;
		 N = A[i];
		while (N > 0) {
			N /= t;
			m = N % 10;
			if (m != 0) {
				P *= N;
			}
			t *= 10;
		}
		if (P > k) {
			cout << A[i] << " ";
		}
	}

	delete[] A;
	return 0;
}
