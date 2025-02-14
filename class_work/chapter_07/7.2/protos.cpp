// protos.cpp -- использование прототипов и вызовы функций
#include <iostream>

void cheers(int);	// прототип: нет значения возврата
double cube(double x);	// прототип: возвращает double

int main() {
	using namespace std;
	cheers(5);			// вызов функции
	cout << "Give me a number: ";
	double side;
	cin >> side;
	double volume = cube(side);	// вызов функции
	cout << "A " << side << "-foot cube has volume of ";
	cout << volume << " cubic feet.\n";
	cheers(cube(2));		// защита прототипа в действии
	return 0;
}

void cheers(int n) {
	using namespace std;
	for (int i = 0; i < n; ++i)
		cout << "Cheers! ";
	cout << endl;
}

double cube(double x) {
	return x * x * x;
}
