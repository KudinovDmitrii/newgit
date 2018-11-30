/* Count of 2 in ternary system */

#include <iostream>
using namespace std;
int TROICH(int a) {
	int b, sum = 0;
	for (;a > 3; a /= 3) {       //Find count of 2
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
	for (int i = 0; i < n; i++) {     // It works O(n * (kolichestvo chisel v chisle) )
		g = TROICH(A[i]);
		if (g <= k) {
			cout << A[i] << " ";
	    }
	}
	delete[] A;
	return 0;
}

