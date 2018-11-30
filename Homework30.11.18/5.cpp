/* Program finds Multiplication of all non zero numbers of a number in an Array */
#include <iostream>
using namespace std;
int main()
{
	int n, k, Proizvedenie = 1, N, Proverka;
	cout << "Type N and K " << endl;
	cin >> n >> k;
	int *A = new int[n];
	cout << "Type numbers of Array " << endl;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < n; i++) {  //It works O(n * (numbers of a number) )
		Proizvedenie = 1;
		N = A[i];
		while (N > 0) {
			Proverka = N % 10;
			if (Proverka) {
				Proizvedenie *= Proverka;
			}
			N /= 10;
		}
		if (Proizvedenie > k) {
			cout << A[i] << " ";
		}
	}

	delete[] A;
	return 0;
}
