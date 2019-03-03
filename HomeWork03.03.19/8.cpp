// При решении задачи, я считал что каждая касса обслуживает людей за разное время, а сами люди одинаковы и никак на времяне влияют.

#include <iostream>
#include<cmath>
using namespace std;

int work(int k, int people) {
	int* A = new int[k];
	cout << "Type time of each cahsbox " << endl;
	for (int i = 0; i < k; i++) // время обслуживания каждой кассы
		cin >> A[i];

	int Sum = 0, j = 0;
	for (int i = 0; i < k; i++) {
		Sum += A[i];
		j++;
	}
	double TIME = Sum / j;
	double sum_people = 0;
	for (int i = 0; i < k; i++) {
		sum_people += TIME / A[i];
	}
	double people_per_time = sum_people / TIME;

	return ceil(people / people_per_time);

}

int main()
{
	int people, k;
	double time;
	cout << "Type the count of cashboxes and people " << endl;
	cin >> k >> people;

	time = work(k, people);
	cout << time;
	return 0;
}
