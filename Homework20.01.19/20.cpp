﻿


#include <iostream>
using namespace std;
int min(int a, int b) {

	if (a >= b)
		return b;
	else
		return a;
}

int max(int a, int b) {

	if (a >= b)
		return a;
	else
		return b;
}
int main()
{
	int n;
	cin >> n;
	int * A = new int[n];
	int * B = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> A[i] >> B[i];
	}
	int t = 0, p = 0, max1 = 99999999, min1 = 0;
	for (int i = 0; i < n; i++) {
		t += max(A[i], B[i]);
		if (A[i] % 3 == 0 && B[i] % 3 == 0)
			p++;
	}
	if (p == n)
		cout << 0;
	else {
		if (t % 3 == 0)
				for (int i = 0; i < n; i++) {
					if ((t + min(A[i], B[i]) - max(A[i], B[i])) % 3 != 0) {
						if (max(A[i], B[i]) - min(A[i], B[i]) < max1 - min1) {
							min1 = min(A[i], B[i]);
							max1 = max(A[i], B[i]);
						}
					}
				}
		cout << t - max1 + min1;
	}


	return 0;
}

