
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int *A = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	int t = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 5; j < n; j++) {
			if (t < A[i] * A[j])
				t = A[i] * A[j];
		}
	}
	cout << t;
	return 0;
}
