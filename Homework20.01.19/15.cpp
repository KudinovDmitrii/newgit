﻿

#include <iostream> 
using namespace std;
int main() {
	int a, first = 5, N;
	cin >> N;
	int *A = new int[first - 1];
	for (int i = 0; i < first; i++) {
		cin >> a;
		A[i % first] = a;
	}
	int sum = 99999999, max = 99999999;
	for (int i = first; i < N; i++) {
		cin >> a;
		if (A[i % first] < max) {
			max = A[i % first];
		}
		if (a * max < sum) {
			sum = a * max;
			A[i % first] = a;
		}
	}
	cout << sum;
	return 0;
}
