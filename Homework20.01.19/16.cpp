
#include <iostream>
using namespace std;
int main() {
	int max = 1001, L = 6;
	int N;
	cin >> N;
	int *A = new int[L];
	for (int i = 0; i < L; i++) {
		cin >> A[i];
	}
	int way, min1, min2, sum, mult;
	min1 = max;
	min2 = max;
	sum = max * max;
	for (int i = L; i < N; i++) {
		cin >> way;
		if (A[0] < min1) {
			min1 = A[1];
		}
		if ((A[0] % 2 == 0) && (A[0] < min2)) {
			min2 = A[0];
		}
		if (way % 2 == 0) {
			mult = way * min1;
		}
		else if (min2 < max) {
			mult = way * min2;
		}
		else {
			mult = max * max;
		}
		if (mult < sum) {
			sum = mult;
			for (int j = 0; j < L - 1; j++) {
				A[j] = A[j + 1];
				A[L] = way;
			}
		}
	}
	if (sum == max * max) {
		sum = -1;
	}
	cout << sum;
	return 0;
}