
#include <iostream>
using namespace std;
int main() {
	int N, t, First, Second, b = 0, a, a2, a3;
	cin >> N;
	cin >> t;
	a = t;
	for (int i = 1; i <= N;i++) {
		cin >> First >> Second;
		b = b + First;
		a2 = a + Second;
		a3 = b + t;
		if (a2 < a3) {
			a = a2;
		}
		else {
			a = a3;
		}
	}
	cout << a;
	return 0;
}
