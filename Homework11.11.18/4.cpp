﻿
/* Programm is searching how many 0 does number N have?*/
#include <iostream>
using namespace std;
int main()
{
   unsigned int N;
   int f = 0;
	cin >> N;
	if (N == 0) {
		cout << 1;
		return 0;
	}
	for (;N != 0; N /= 10) {
		if (N % 10 / 1 == 0) {
			f++;
		}
	}
	if (f == 0) {
		cout << " None ";
	}
	else {
		cout << f;
	}
	return 0;
}
