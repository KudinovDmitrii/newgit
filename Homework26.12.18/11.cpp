//Searching for the most number 
#include <iostream>
using namespace std;
int main()
{
	
	int size;
	cin >> size;
	int * A = new int[size];
	bool * B = new bool[size];
	int * C = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> A[i];
		B[i] = 1;
		C[i] = 0;
	}
	for (int j = 0; j < size; j++) {
		if (B[j] != 0) {
			C[j]++;
			for (int i = j + 1; i < size; i++) {
				if(B[i] != 0)
				if (A[j] == A[i]) {
				    B[i] = 0;
					C[j]++;
				}
			}
		}
	}
	
	int t = 0, q, p = 1;
	for (int i = 0; i < size; i++) {
		if (B[i] != 0) {
			if (t < C[i]) {
				t = C[i];
				q = A[i];
			}
		}
		if (B[i] == 0)
			p++;
	}
	if(p == size)
		cout << "NO ";
	else
		cout << q;



	return 0;
}

