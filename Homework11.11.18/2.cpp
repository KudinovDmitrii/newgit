﻿
/*Program summarizes odd numbers of the number*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long a;
	int sum = 0;
	cin >> a;
	while (a != 0) {
		if (a % 10 / 2 * 2 != a % 10) {
			sum += (a % 10);
		}
		a /= 10;
	}
	cout << sum;
	return 0;
}

