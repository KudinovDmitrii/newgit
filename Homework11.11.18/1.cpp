﻿
//Recursive Euler function.

#include <iostream>
using namespace std;

int Euler(int a, int b) //Function
{
		if (a == 1) //function of number 1 equals 1
		{
			return (1);
		}
		// if gcd equals 1, it means that we found one number, then (a-1) and start searching for another one
		for (int i = a; i > 0; i--) {  
			if (a % i == 0 && b % i == 0) {
				if (i == 1) {
					return(1 + Euler(a - 1, b));  
				}
				break;
			}
		}
		// if gcd != 1, we are searching gcd for (a-1)
			return(Euler(a - 1, b));
}


int main()
{
	int a, b;
	cout << "Type a number and repeat " << endl;
	cin >> a >> b;
	cout << Euler(a, b);
	return 0;
}
