﻿

#include <iostream>
#include <cmath>
using namespace std;

int BATA(int a, int b) {
	if (a > b)
		return 0;

	if (a == b)
		return 1;

	if (sqrt(b) * sqrt(b) == b)
		if (b % 7 == 0)
			if ((b - 1) % 10)
				return BATA(a, b - 9) + BATA(a, sqrt(b)) + BATA(a, b / 7) + BATA(a, (b - 1) / 10);
			else
				return BATA(a, b - 9) + BATA(a, sqrt(b)) + BATA(a, b / 7);
		else
			return BATA(a, b - 9) + BATA(a, sqrt(b));
	else if (b % 7 == 0)
		if ((b - 1) % 10)
			return BATA(a, b - 9) + BATA(a, b / 7) + BATA(a, (b - 1) / 10);
		else
			return BATA(a, b - 9) + BATA(a, b / 7);
	else
		return BATA(a, b - 9);
}
int main()
{
	int X, Y;
	cin >> X >> Y;


	if (BATA(X, Y) >= 1)
		cout << " YES ";
	else
		cout << " NO ";



	return 0;
}

