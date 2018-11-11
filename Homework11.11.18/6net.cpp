

#include "pch.h"
#include <iostream>
using namespace std;
int lox(int a) {
	int t = a - 1;
	int q = 0;
	int max1 = q;
	for (int j = 1; t >= j; j++, t--) {
		q = j * t;
		if (max1 < q) {
			max1 = q;
		}
	}
	if (max1 < a) {
		return a;
	}
return max1;
}
int MaxPower(int a) {
	int t = a - 1, j = 1;
	int q = 0, max = q;
	int T = t, J = j;
	for (int j = 1; t >= j; j++, t--) {
		T = t;
		J = j;
		if (t >= 4) {
			T = MaxPower(t);
		}
		if (j >= 4) {
			j = MaxPower(j);
		}
		q = J * T;
		if (max < q) {
			max = q;
		}
	}
	if (max < a) {
		return a;
	}
	return max;
}
int main()
{
	int a;
	cin >> a;
	cout << MaxPower(a);
	return 0;
}
