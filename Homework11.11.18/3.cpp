/* Programm is searching for "k" superPrime number */
#include <iostream> 
using namespace std;

int Prime(int a) {        //function recognizes prime number
	int k = 2, b, i = 1;
	b = a / k * k;
	for (int k = 2; b != a; k++) {
		b = a / k * k;
		i++;
	}
	return i;
}
int main()
{ /*g - chislo, t - nomer chisla, a - nomer sverhprostogo chisla*/
	int k;
	int t = 3, g = 3, i, a = 1;
	cout << " Type the number of superprime number " << endl;
	cin >> k;
	for (;;g++) {
		i = Prime(g); // proverka prostoe li chislo
		if (i == g) {
			i = Prime(t); //proverka prostoi li nomer
			if (i == t) {
				if (a == k) { //esli nomer sverhprostogo chisla sovpadaet s "k"
					cout << g;
					break;
				}
				a++;
			}
			t++;
		}
	}

	return 0;
}
