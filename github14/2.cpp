#include "pch.h"
#include <iostream> 
using namespace std;
int main() { /*po chislam X i N nuzno naiti chislo Y takoe chto 
			 X * Y % N =1 */
	unsigned int X, Y = 0, N;
	cin >> X >> N;
	for (int Y = 0; Y < N; Y++) {
		if (X * Y % N == 1) {
			cout << Y;
			return 0;
		}
	} cout << "None";
	return 0;
}