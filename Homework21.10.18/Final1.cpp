/* structure RATIONAL, for working with unsigned rational numbers, like
irreducible fractions.

number / denom.


The program works with arithmetic and comparisons.

"Int main" shows that the program is working correctly.
*/
#include "pch.h"
#include <iostream>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) { return a; }
	return gcd(b, a % b);
}

struct rational {
	int number;
	int denom;
	rational(int a, int b) {
		number = a / gcd(a, b);
		denom = b / gcd(a, b);
	}
	rational(int a) {
		number = a;
		denom = 1;
	}
	rational(const rational &A) {
		number = A.number;
		denom = A.denom;
	}
	rational& operator=(rational &A) {
		number = A.number;
		denom = A.denom;
		return *this;
	}
	rational& operator*=(rational &A) {
		number *= A.number;
		denom *= A.denom;
		int d = gcd(number, denom);
		number /= d;
		denom /= d;
		return *this;
	}
	rational& operator+=(rational& A) {
		number = (number*A.denom + denom * A.number);
		denom *= A.denom;
		int d = gcd(number, denom);
		number /= d;
		denom /= d;
		return *this;
	}
	rational& operator-=(rational& A) {
		number = (number*A.denom - denom * A.number);
		denom *= A.denom;
		int d = gcd(number, denom);
		number /= d;
		denom /= d;
		return *this;
	}
	rational& operator/=(rational& A) {
		number *= A.denom;
		denom *= A.number;
		int d = gcd(number, denom);
		number /= d;
		denom /= d;
		return *this;
	}
	friend istream& operator>>(istream& in, rational& A);
	friend ostream& operator <<(ostream& out, const rational& A);
};
istream& operator>>(istream& in, rational& A) {
	in >> A.number >> A.denom;
	return in;
}
ostream& operator <<(ostream& out, const rational& A)
{
	out << A.number << "/" << A.denom;
	return out;
}
rational operator/(rational A, rational& B) {
	return A /= B;
}
rational operator-(rational A, rational& B) {
	return A -= B;
}
rational operator+(rational A, rational& B) {
	return A += B;
}
rational  operator*(rational A, rational & B) {
	return A *= B;
}
bool operator==(rational& A, rational& B) {
	return((A.number == B.number) && (A.denom == B.denom));
}
bool operator!=(rational& A, rational& B) {
	return !(A == B);
}
bool operator>(rational A, rational B) {
	A.number *= B.denom;
	B.number *= A.denom;
	return A.number > B.number;

}
bool operator>=(rational A, rational B) {
	A.number *= B.denom;
	B.number *= A.denom;
	return A.number >= B.number;

}
bool operator<=(rational A, rational B) {
	A.number *= B.denom;
	B.number *= A.denom;
	return A.number <= B.number;

}
bool operator<(rational A, rational B) {
	A.number *= B.denom;
	B.number *= A.denom;
	return A.number < B.number;

}
int main() {
	int m, n, z, x;
	cout << "Type numerator and denominator for 2 numbers ";
	cin >> m >> n >> z >> x;
	rational a(m, n), b(z, x);
	cout << "a=" << a << " b=" << b << endl;
	cout << "a + b= " << a + b << endl;
	cout << "a - b= " << a - b << endl;
	cout << "a * b= " << a * b << endl;
	cout << "a / b= " << a / b << endl;
	rational t = a;
	rational(A) = t *= b;
	cout << "a *= b  " << A << endl;;
	rational i = a;
	rational(N) = i /= b;
	cout << "a /= b  " << N << endl;
	rational o = a;
	rational(f) = o += b;
	cout << "a += b  " << f << endl;
	rational j = a;
	rational(g) = j -= b;
	cout << "a -= b  " << g << endl;
	if (a == b) {
		cout << a << " = " << b << endl;
	}
	if (a != b) {
		cout << a << " != " << b << endl;
	}
	if (a > b) {
		cout << a << " > " << b << endl;
	}
	if (a < b) {
		cout << a << " < " << b << endl;
	}
	if (a >= b) {
		cout << a << " >= " << b << endl;
	}
	if (a <= b) {
		cout << a << " <= " << b << endl;
	}
	return 0;
}