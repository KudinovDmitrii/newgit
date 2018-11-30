/* Find all X and Y */
#include <iostream>
using namespace std;
int main()
{
	int y[19] = { 0 };
	int time = 0, non = 0, t = 0;
	for (int x = 0; x < 38894;x++) {
		time = (78487894 - 2018 * x) / 2019;
		non = (78487894 - 2018 * x) % 2019;
		if (non == 0) {
			y[t] = time;
			cout << "x= " << x << "  ";
			cout << "y= " << y[t] << endl;
			t++;
		}
	}
	return 0;
}

