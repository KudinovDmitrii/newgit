
#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	int N;
	int *A = new int[20];
	for (int i = 0; i < 20; i++) {
		A[i] = 0;
	}
	cin >> N;
	int a, t;
	for (int i = 0; i < N; i++) {
		cin >> a;
		t = 0;
		while (a > 0) {
			t++;
			a /= 10;
		}
		A[t]++;
	}
	int max = 0, dlina;
	for (int i = 1; i < 20; i++) {
		if (A[i] >= max) {
			max = A[i];
			dlina = i;
		}
	}
	cout << dlina << " " << max;
	return 0;
}