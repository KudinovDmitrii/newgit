
#include "pch.h"
#include <iostream>
using namespace std;
int TROICH(int a) {
	int b, sum = 0;
	for (;a > 3; a /= 3) {
		b = a % 3;
		if (b == 2) {
			sum += b;
		}
	}
	sum /= 2;
	return sum;
}

int main()
{
	int n, k, g;
	cout << "Type n and k " << endl;
	cin >> n >> k;
	int *A = new int[n];
	cout << "Type numbers of Array " << endl;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < n; i++) {
		g = TROICH(A[i]);
		if (g <= k) {
			cout << A[i] << " ";
	    }
	}
	return 0;
}

