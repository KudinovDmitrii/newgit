﻿
/*Vozvodim chislo A v stepen B, chisla Long long, nahodim pooclednuu number */ 
#include <iostream>

using namespace std;

long long Number(long long a, long long b)
{
	a %= 10;
	int m, t = a;
	int V[5]; 
	V[0] = a;
	/*we made array [5] because any number has only 4 or less variations of result of exponentiation of the last number */
	for (int i = 1; i <= 5; i++) /*we are searching how many variations of last number we have */
	{
		t *= a;
		t %= 10;
		V[i] = t;
		if (t == a)
		{
			m = i;
			break;
		}
	}
	b %= m; 
	if (m == 1) /* if our number has only 1 variation, we return it*/
	{
		return V[0]; 
	}
	else
	{
		if (b == 0) 
		{
			return V[m - 1]; 
		}
		else 
		{
			return V[b - 1]; 
		}
	}

}




int main()
{
	long long a, b;
	cin >> a >> b;
	cout << Number(a, b);
}
