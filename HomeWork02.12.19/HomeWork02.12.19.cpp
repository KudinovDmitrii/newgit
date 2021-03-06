#include <iostream>
#include <deque>
using namespace std;
deque<int> sosedi = { 0 };

void painting(bool** matrix, int *paint, int n) {
	int min = 1;
	int time = 0;
	for (int i = 0; i < n; i++) {
		min = 1;
		for (int j = 0; j < n; j++) {
			if (matrix[i][j] == 1 && paint[j] > min)
				sosedi.push_back(paint[j]);
			if (matrix[i][j] == 1 && paint[j] == min) {
				min++;
				time = 1;
				while (time == 1) {
					time = 0;
					for (int t = 0; t < sosedi.size(); t++)
						if (sosedi.at(t) == min) {
							min++;
							time = 1;
						}
				}
			}
		}
		paint[i] = min;
		while (sosedi.size() != 0)
			sosedi.pop_back();
	}
}


int main()
{
	int n;
	cin >> n;
	bool ** matrix;
	int *paint;
	matrix = new bool*[n];
	paint = new int[n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new bool[n];
		paint[i] = 0;
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> matrix[i][j];

	painting(matrix, paint, n);
	cout << endl;
	for (int i = 0; i < n; i++)
		cout << paint[i] << " ";
	return 0;
}

