#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std; // Srednee arifm
int main() {
	int a, f = 1, sum = 0;
	cin >> a;
	while (a != 0) {
		sum += a;
		cin >> a;
		f++;
	}

	cout << fixed << setprecision(3);
	cout << (double)sum / f;
	return 0;
}