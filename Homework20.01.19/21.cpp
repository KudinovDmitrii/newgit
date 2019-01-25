
#include <iostream>
using namespace std;
int main() {
	int N;
	int *A = new int[9];
	for (int i = 0; i < 9; i++) {
		A[i] = 0;
	}
	cin >> N;
	int a, n;
	for (int i = 0; i < N; i++) {
		cin >> a;
		while (a > 0) {
			n = a % 10;
			A[n]++;
			a = a / 10;
		}
	}
	int max = 0;
	for (int i = 0; i < 9; i++) {
		if (A[i] > max) {
			max = A[i];
		}
	}
	for (int i = 9; i > 0; i--) {
		if (A[i] == max) {
			cout << i << " ";
		}
	}
	return 0;
}
