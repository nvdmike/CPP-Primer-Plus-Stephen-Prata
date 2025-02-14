// recur.cpp -- использование рекурсии
#include <iostream>

void countdown(int n);

int main() {
	countdown(4);	// вызов рекурсивной функции
	return 0;
}

void countdown(int n) {
	using namespace std;
	cout << "Counting down ... " << n << " (n at " << &n << ")" << endl;
	if (n > 0)
		countdown(n - 1);	// функция вызывает сама себя
	//cout << n << ": Kaboom!\n";
	cout << n << ": Kaboom!" << n << " (n at " << &n << ")" << endl;
}
