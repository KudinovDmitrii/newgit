﻿

#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	bool *used = new bool[n + 1000000];
	for (int i = 2; i <= n; i++) {
		used[i] = 1;
	}
	for (int k = 2; k <= n; k++) {
		if (used[k] != 0) {
			for (int j = k + k; j <= n + 1000000 - 1; j += k) {
				used[j] = 0;

			}
			if (used[k * 2 + 1] != 0) {
				cout << k << " ";
			}
		}
	}
	
		return 0;
}

