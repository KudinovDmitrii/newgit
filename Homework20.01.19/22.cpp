﻿


#include <iostream>
using namespace std;
int main()
{
	int n , sum = 0, proval = 0, min = 9999999;
	cin >> n;
	int * A = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> A[i];
		sum += A[i];
		if (A[i] % 6 == 0)
			proval++;
    }
	if (proval == n)
		cout << 0 << "  " << 0;
	else if (sum % 6 == 0) {
		for (int i = 0; i < n; i++) {
			if (A[i] % 6 != 0)
				if (min > A[i])
					min = A[i];
		}
		sum -= min;
		cout << sum << "  " << n - 1;
	}
	else
		cout << sum << "  " << n;

	return 0;
}


