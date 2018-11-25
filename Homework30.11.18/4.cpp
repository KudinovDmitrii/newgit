﻿

#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int *a = new int[n + 1]; // dostovernost
	int *b = new int[n + 1]; // chisla
	for (int i = 0; i <= n; i++)
		a[i] = i;
	for (int i = 0; i <= n; i++)
		b[i] = 0;

	for (int p = 2; p <= n; p++) {
		if (a[p] != 0) {
			for (int j = p + p; j <= n; j += p) {
				a[j] = 0;
				b[j] = j;
			}
		}
	}
	b[5] = 5;
	for (int i = 2; i <= n; i++) {
		if (b[i] != 0) {
			cout << b[i] << " ";
		}
	}
	return 0;
}
