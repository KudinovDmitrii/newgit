
#include "pch.h"
#include <iostream> 
using namespace std;
int main() {
	int a, first = 5;
	int N;
	cin >> N;
	int *A = new int[first - 1];
	for (int i = 0; i < first; i++) {
		cin >> a;
		A[i % first] = a;
	}
	int max = 0, sum = 0;
	for (int i = first; i < N; i++) {
		cin >> a;
		if (A[i % first] > sum) {
			sum = A[i % first];
		}
		if (a + sum > max) {
			max = a + sum;
			A[i % first] = a;
		}
	}
	cout << max;
	return 0;
}