#include "pch.h"
#include <iostream>
using namespace std;
int main() { /* opredelit sostovnoe li chislo */

	unsigned int a, b, k = 2;
	cin >> a;
	b = a / k * k; 
	if (a != 1) {
		while (b != a) {
			k++;
			b = a / k * k;
		} if (k == a) {
			cout << "Prime";
		}
		else {
			cout << "Composite";
		}
	}
	else {
		cout << "Unit";
	}
	return 0;
}