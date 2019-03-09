
#include <iostream>
using namespace std;

int work(int k, int people) {
	int* A = new int[people];
	cout << "Type time of each Man_woman " << endl;
	for (int i = 0; i < people; i++)
		cin >> A[i];

	int gone = 0, next = 0;
	int time = 0;
	while (gone < people) {
		for (int man_woman = 0; man_woman < k + next; man_woman++) {
			if (A[man_woman] == 0) {
				if (people - k != next)
					next++;
				gone++;
			}
			A[man_woman]--;
		}
		time++;
	}

	return time - 1;
}

int main()
{
	int k, people;
	cout << "Type the count of cashboxes and people " << endl;
	cin >> k >> people;

	int time = work(k, people);

	cout << time;
	return 0;
}