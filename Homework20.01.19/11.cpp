
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
		if(A[i - 1] < A[i] && A[i - 1] * 2 > A[i])
		t++;
	}

	cout << t;
	return 0;
}
