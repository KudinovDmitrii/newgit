﻿
#include <iostream>
using namespace std;

int BATA(int a, int b, int c) {
	if (a > b)
		return 0;

	if (a == b)
		return 1;

	if (b == c)
		return 0;
	if (b % 10 == 0)
			if ((b - 1) % 2 == 0)
				return BATA(a, b / 10, c) + BATA(a, b - 1, c) + BATA(a, (b - 1) / 2, c);
			else
				return BATA(a, b / 10, c) + BATA(a, b / 2, c) + BATA(a, b - 1, c);
	else if ((b - 1) % 2 == 0)
		return BATA(a, b - 1, c) + BATA(a, (b - 1) / 2, c);
		else
			return BATA(a, b / 2, c) + BATA(a, b - 1, c);
}
int main()
{
	int X, Y, Z;
	cin >> X >> Y >> Z;


	cout << BATA(X, Y, Z);



	return 0;
}

