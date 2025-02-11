// twoarg.cpp -- функция с двумя аргументами
#include <iostream>

using namespace std;

void n_chars(char, int);

int main() {
	int times;
	char ch;
	cout << "Enter a character: ";				// ввод символа
	cin >> ch;
	while (ch != 'q') {					// q для завершения
		cout << "Enter an integer: ";			// ввод целого числа
		cin >> times;
		n_chars(ch, times);				// функция с двумя аргументами
		cout << "\nEnter another character or press the"
				" q-key to quit: ";		// ввод другого символа или q для завершения
		cin >> ch;
	}
	cout << "The value of times is " << times << ".\n";	// вывод значения переменной times
	cout << "Bye\n";
	return 0;
}

void n_chars(char c, int n) {	// вывод значения c n раз
	while (n-- > 0)
		cout << c;
}
