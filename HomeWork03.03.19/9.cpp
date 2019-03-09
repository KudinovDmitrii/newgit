

#include <iostream>
using namespace std;

class Array {
public:
	pair <int, int>* data;
	int I = 0;
	int size;

	Array(int N) {
		size = N;
		data = new pair <int, int>[N];
	}

	Array(Array& A) {
		size = A.size;
		data = A.data;
	}

	~Array() {
		delete[] data;
	}

	pair <int, int> &operator[](int i) {
		while (i >= size) {
			i -= size;
		}
		return data[i];
	}

	void input() {
		int j, a, b;
		for (int i = I; i < size + I; i++) {
			j = i;
			while (j >= size)
				j -= size;
			cin >> a >> b;
			data[j] = make_pair(a, b);
		}
	}

	void output() {
		int j;
		for (int i = I; i < size + I; i++) {
			j = i;
			while (j >= size)
				j -= size;
			cout << data[j].first << " " << data[j].second << "\n";
		}
	}

	void shift(int k) {
		I += k;
	}

};

int main() {

	return 0;
}
