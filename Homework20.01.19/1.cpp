﻿

#include <iostream>
using namespace std;

int BATA(int a, int b) {
	if (a > b)
		return 0;

    if (a == b)
	    return 1;

	if(b % 3 == 0)
		if(b % 2 == 0)
			return BATA(a, b / 3) + BATA(a, b / 2) + BATA(a, b - 1);
		else
			return BATA(a, b / 3) + BATA(a, b - 1);
	else if (b % 2 == 0)
		return BATA(a, b / 2) + BATA(a, b - 1);
	else
		return BATA(a, b - 1);
	
	
}
int main()
{
	int X, Y;
	cin >> X >> Y;


	cout << BATA(X, Y);



	return 0;
}

