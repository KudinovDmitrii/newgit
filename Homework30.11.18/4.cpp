/* Program finds n sostavnih numbers */
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	bool *a = new bool[4*n + 1];
	a[0] = a[1] = 0;
	for (int i = 2; i <= n; i++){
		a[i] = 1;
     }
	int t = 0;
	for (int i = 2; t < n;i++) {
		if (a[i]) {
			for (int j = i + i; j <= 4 * n; j += i) {
				a[j] = 0;
			}
			t++;
		}
	}
	t = 0;
	for(int i = 2; t < n; i++) {
		if (a[i]) {
			t++;
			cout << i << " ";
		}
	}
	return 0;
}
