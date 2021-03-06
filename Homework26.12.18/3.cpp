// Searching 2 number in the Array
#include <iostream>
using namespace std;
bool search(int *A, int size,int x,int q, int p = 0) {
	if (A[(q + p) / 2] == x)
		return true;

	if (q - p <= 1)
		return false;

	if (A[(p + q) / 2] > x) 
		search(A, size, x, (p + q) / 2, p);
	

	if (A[(p + q) / 2] < x) 
		search(A, size, x, q, (p + q) / 2);
}
int main()
{
	int size;
	cin >> size;
	int *A = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> A[i];
	}
	int a, b;
	cin >> a >> b;
	if (search(A, size, a, size) && search(A, size, b, size) == true)
		cout << " YES ";
	else cout << " NO";
	
	delete[] A;
	return 0;
}

