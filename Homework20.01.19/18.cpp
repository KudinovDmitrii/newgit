﻿


#include <iostream>
using namespace std;
int main() {
	int max = 100, N;
	int last;
	int *A = new int[max - 1];
	for (int i = 0; i < max - 1; i++) {
		A[i] = 0;
	}
	cin >> N;
	int a, b, most;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		last = b % a;
		if (last > 0) {
			A[last] = A[last] + 1;
		}
	}
	most = 1;
	for (int i = 1; i < max - 1; i++) {
		if (A[i] >= A[most]) {
			most = i;
		}
	}
	if (A[most] == 0) {
		most = 0;
	}
	cout << most;
	return 0;
}
