#include "pch.h"
#include <iostream>
using namespace std;

int main() /*massiv neizvesten razmer i ego dannie
		   naiti chisla delachiesa na 72 ili 27 no ne vmeste*/
{
	int size, sum = 0, i;
	cin >> size;
	int * a = new int[size];
	for (int i = 0; i < size; i++)
		cin >> a[i];
	for (int i = 0; i < size; i++)
		if (a[i] / 72 * 72 == a[i] ^ a[i] / 27 * 27 == a[i]) {
			sum += a[i];
		}
	cout << sum;
	delete[] a;
	return 0;
}