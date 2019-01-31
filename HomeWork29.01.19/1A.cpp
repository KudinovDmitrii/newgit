
#include <iostream>
using namespace std;

class double_vector {
	double * data;
	int size;
	int capacity;
public:
	double_vector() {
		size = capacity = 1;
		data = new double[1];
		*data = 0;
	}

	double_vector(unsigned int n) {
		size = capacity = n;
		data = new double[n];
		for (int i = 0; i < n; i++)
			data[i] = 0;
	}
	~double_vector() {
		delete[] data;
	}

	double_vector(const double_vector& A) {
		size = A.size;
		data = new double[size];
		for(int i = 0; i < size; i++)
	        dta[i] = A.data[i];  
	}

	const double_vector& operator=(const double_vector& A) {
		size = A.size;
		capacity = A.capacity;
		data = A.data;
		return *this;
	}

	double &operator[] (unsigned int n) {
		return data[n];
	}

	void push_back(double x) {
		if (size >= capacity) {
			capacity *= 2;
			double * temp = new double[capacity];
			for (int i = 0; i < size; i++)
				temp[i] = data[i];
			delete[] data;
			data = temp;
		}
		data[size] = x;
		size++;
	}

	double pop_back() {
		double t = data[size];
		size--;
		double* temp = new double[capacity];
		for (int i = 0; i < size; i++)
			temp[i] = data[i];
		delete[] data;
		data = temp;
		return t;
	}

	unsigned int size() {
		return size;
	}

	unsigned int capacity() {
		return capacity;
	}
};

int main()
{







	return 0;
}
