// inline.cpp -- использованеи встроенной функции
#include <iostream>

// определение встроенной функции
inline double square(double x) { return x * x; }

int main() {
	using namespace std;
	double a, b;
	double c = 13.0;
	a = square(5.0);
	b = square(4.5 + 7.5);	// допускается передача выражений
	cout << "a = " << a << ", b = " << b << "\n";
	cout << "c = " << c;
	cout << ", c squared = " << square(c++) << "\n";
	cout << "Now c = " << c << "\n";
	return 0;
}
