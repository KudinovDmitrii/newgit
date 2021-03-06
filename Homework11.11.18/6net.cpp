﻿

/* THE DRAGON TASK, we are searching for the max power that they can have. */
#include <iostream>
using namespace std;
int MaxPower(int a) { //The function is recursive and needs a lot of time to pull out the result */
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
