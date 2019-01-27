
#include "pch.h"
#include <iostream>
using namespace std;

class Array {
	int* data;
	int size;
public:
	 
	Array(int n) {
		int* temp = new int[n];
		for (int i = 0; i < n; i++)
			temp[i] = 0;
		size = n;
		data = temp;
	}

	~Array() {
		delete[] data;
	}

	const Array& operator=(const Array& A) {
		int* temp = new int[size];
		for (int i = 0; i < size; i++)
			temp[i] = A[i];
		delete[] data;
		data = temp;
	}

	int size() {
		return size;
	}
};


int main()
{



	return 0;
}
