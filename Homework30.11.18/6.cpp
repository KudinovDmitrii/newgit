/* Program Finds Chena Numbers */
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	bool* u = new bool[10 * n + 1]; 
	for (int i = 0;i <= n;i++) {
		u[i] = 1;
	}
	bool *a = new bool[1000 * n];
	for (int i = 2; i < 10 * n;i++) {
		a[i] = 0;
	}
	for (int i = 2; i < 10 * n + 1;i++) { // Resheto
		if (u[i]) {
			for (int j = i + i; j < 10 * n + 1; j += i) {
				u[j] = 0;
			}
		}
	}
	for (int i = 2; i < n;i++) {     // Peremnozhenie vseh prostih chisel 
		if (u[i])
			for (int j = 2; j < n;j++) {
				if (u[j])
					a[j*i] = 1;
			}
	}
	for (int i = 2; i < n;i++) {
		if (u[i]) {
			if (u[i + 2] || a[i+2] ) {
				cout << i << " ";
			}
		}
	}


	return 0;
}

