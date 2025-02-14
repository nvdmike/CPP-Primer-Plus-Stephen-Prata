// funtemp.cpp -- использование шаблона функции
#include <iostream>
// прототип шаблона функции
template <typename T>	// или class T
void Swap(T &a, T &b);

int main() {
	using namespace std;
	int i = 10;
	int j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "Using compiler-generated int swapper:\n";
	Swap(i, j);	// генерирует void swap(int &, int &)
	cout << "Now i, j = " << i << ", " << j << ".\n";
	double x = 24.5;
	double y = 81.7;
	cout << "x, y = " << x << ", " << y << ".\n"; 
	cout << "Using compiler-generated int swapper:\n";
	Swap(x, y);	// генерирует void swap(double &, double &)
	cout << "Now x, y = " << x << ", " << y << ".\n";
	//cin.get();
	return 0;
}
// определение шаблона функции
template <typename T>	// или class T
void Swap(T &a, T &b) {
	T temp;		// temp - переменная типа T
	temp = a;
	a = b;
	b = temp;
}
