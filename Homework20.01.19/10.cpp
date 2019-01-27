
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
	int t = 1;
	for (int i = 0; i < n; i++) {
		if(A[i] % 3 == 0)
			if((A[i] - 1) % 2 == 0)
				t*=A[i];
	}

	cout << t;
	return 0;
}
