/* Euler number */
#include <iostream>
using namespace std;



int main()
{
	int n;
	cout << "Type a number " << endl;
	cin >> n;
	bool* u = new bool[n+1];
	for (int i = 0; i < n;i++) {
		u[i] = 1;
    }
	for (int i = 2; i < n; i++) {
		if (u[i]) {
			for (int j = i; j <= n; j += i) {
				if (n % i == 0) {
					u[j] = 0;
					if (j == n) {
						u[i] = 0;
					}
				}
			}
		}
	}

	for (int i = 1; i < n;i++) {
		if (u[i]) {
			cout << i << " ";
		}
	}
	

	return 0;

}
