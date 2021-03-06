/*The structure Array, for working with array which is allocated to
dynamic memory. 

The program works with arrays any size.

The program also overloads operator square brackets.

Function foo is summarize all elements in an array.
*/
#include "pch.h"
#include <iostream>
using namespace std;
struct Array {
	size_t size;
	int * data;
	Array(size_t size) : size(size),
		data(new int[size]) {}

	int foo(int size) {
		int sum = 0;
		for (int i = 0; i < size; i++) {
			cin >> data[i];
			sum += data[i];
		}
		return sum;
	}

	int &operator[] (int x) {
		return data[x];
	}

	~Array() {
		delete[] data;
	}

};

int main()
{
	int a;
	cout << "Type the Size and elements " << endl;
	cin >> a;
	Array Array(a);
	cout << Array.foo(a);
	return 0;
}