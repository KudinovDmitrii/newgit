
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int * A = new int[n];
	for (int i = 0; i < n; i++)
		cin >> A[i];
	int t = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 4; j < n; j++) {
			if (A[i] * A[j] % 38 == 0) {
				cout << A[i] << "  " << A[j] << endl;
				t++;
			}
		}
	}
	cout << t << " Pairs ";



	return 0;
}

