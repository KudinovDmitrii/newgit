
#include <iostream>
#include <cmath>
using namespace std;

int BATA(int a, int b, int c) {
	if (a > b)
		return 0;

	if (a == b)
		return 1;
	if (b == c)
		return 0;

	if (sqrt(b) * sqrt(b) == b)
		if (b % 7 == 0)
			if ((b - 1) % 10)
				return BATA(a, b - 5, c ) + BATA(a, sqrt(b), c) + BATA(a, b / 3, c) + BATA(a, (b - 2) / 10, c);
			else
				return BATA(a, b - 5, c) + BATA(a, sqrt(b), c) + BATA(a, b / 3, c);
		else
			return BATA(a, b - 5, c) + BATA(a, sqrt(b), c);
	else if (b % 3 == 0)
		if ((b - 2) % 10)
			return BATA(a, b - 5, c) + BATA(a, b / 3, c) + BATA(a, (b - 2) / 10, c);
		else
			return BATA(a, b - 5, c) + BATA(a, b / 3, c);
	else
		return BATA(a, b - 5, c);
}
int main()
{
	int X, Y, Z;
	cin >> X >> Y >> Z;


	if (BATA(X, Y, Z) >= 1)
		cout << " YES ";
	else
		cout << " NO ";



	return 0;
}

