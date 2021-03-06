
#include <iostream>
using namespace std;

class double_vector {
	double * data;
	int size;
	int capacity;
public:

	double_vector(double* A, int n) {
		size = n;
		capacity = size * 2;
		for (int i = 0; i < size; i++) {
			data[i] = A[i];
		}
	}

	void resize() {
		capacity *= 2;
		double* temp = new double[capacity];
		for (int i = 0; i < size; i++)
			temp[i] = data[i];
		delete[] data;
		data = temp;
	}

	void push_front(int x) {
		data[0] = x;
		size++;
	}

	int pop_front() {
		int t = data[0];
		size--;
		double * temp = new double[capacity];
		for (int i = 0; i < size; i++)
			temp[i] = data[i + 1];
		delete[] data;
		data = temp;
		return t;
	}

	void insert(int x, int n) {
		double* temp = new double[capacity];
		size++;
		for (int i = 0; i < size; i++) {
			if (i < n)
				temp[i] = data[i];
			else if (i == n)
				temp[i] = x;
			else
				temp[i] = data[i - 1];
		}
		delete[] data;
		data = temp;
	}

	void erase(int pos) {
		double* temp = new double[capacity - 1];
		size--;
		for (int i = 0; i < size; i++) {
			if (i < pos)
				temp[i] = data[i];
			else if (i > pos)
				temp[i - 1] = data[i];
		}
		delete[] data;
		data = temp;
	}

	void erase(int a, int b) {
		double* temp = new double[capacity];
		int diff = b - a - 1;
		size = size - diff;
		for (int i = 0; i < size; i++) {
			if (i < a)
				temp[i] = data[i];
			else if (i > b)
				temp[i - diff] = data[i];
		}
		delete[] data;
		data = temp;
	}

	const double_vector& operator+(const double_vector& A) {
		double* temp = new double[capacity];
		for (int i = 0; i < size * 2; i++) {
			if (i <= size)
				temp[i] = data[i];
			else
				temp[i] = A[i];
		}
		delete[] data;
		data = temp;
	}

	int find(int x) {
		for (int i = 0; i < size; i++)
			if (data[i] == x)
				return i;
	}
};

int main()
{


	return 0;
}
