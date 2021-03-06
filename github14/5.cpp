#include "pch.h"
#include <iostream>

using namespace std;
// funkcii min, max, avg, med, swap , 3 chisla, primer
int min(int a, int  b, int  c) { // minimalnoe 
	if (a <= b && a <= c) {
		return a;
	}
	if (b <= a && b <= c) {
		return b;
	}
	return c;
}
int max(int a, int b, int c) { // maximalnoe 
	if (a >= b && a >= c) {
		return a;
	}
	if (b >= a && b >= c) {
		return b;
	}
	return c;
}
int avg(int a, int b, int c) { // srednee arifm
	int sum = 0;
	sum = double((a + b + c) / 3);
	return sum;
}
int med(int a, int b, int c) { // mediannoe 
	int min, max, h;
	if (a <= b && a <= c) {
		min = a;
	}

	else if (b <= a && b <= c) {
		min = b;
	}
	else min = c;

	if (a >= b && a >= c) {
		max = a;
	}
	else if (b >= a && b >= c) {
		max = b;
	}
	else max = c;

	h = (a + b + c) - min - max;
	return h;
}
void swap(int* a, int* b, int* c) { // 1 v 2, 2 v 3, 3 v 1
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

int main() { // itogid
	int x, y, z, t, k, l, m;
	cin >> x >> y >> z;
	t = min(x, y, z);
	cout << "Min = " << t << endl;
	k = max(x, y, z);
	cout << "Max = " << k << endl;
	l = avg(x, y, z);
	cout << "Average = " << l << endl;
	m = med(x, y, z);
	cout << "Med = " << m << endl;
	swap(&x, &y, &z);
	cout << "Moving" << " " << x << y << z;
	return 0;
}