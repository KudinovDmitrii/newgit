
#include "pch.h"
#include <iostream>
using namespace std;
long long Praimorial(int a) {
	bool *u = new bool[4 * a + 1];
	for (int i = 0; i <= 2 * a; i++) {
		u[i] = 1;
	}
	int t = 0;
	long long sum = 1;
	for (int i = 2; t < a; i++) {
		if (u[i] != 0) {
			for (int j = i + i; j <= 4 * a; j += i) {
				u[j] = 0;
			}
			t++;
		}
	}
	t = 0;
	for (int i = 2; t < a; i++) {
		if (u[i] != 0) {
			t++;
			sum *= i;
		}
	}
	return sum;
}
int main()
{
	int p;
	cin >> p;
	cout << Praimorial(p);
	return 0;
}
