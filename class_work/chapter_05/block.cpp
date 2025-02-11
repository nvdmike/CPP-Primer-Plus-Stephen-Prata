// block.cpp -- использование блока
#include <iostream>

int main() {
	using namespace std;
	cout << "the amazing accounto will sum and average: ";
	cout << "five numbers for you.\n";
	cout << "please enter five values:\n";
	double number;
	double sum = 0.0;
	for (int i = 1; i <= 5; i++) {			// начало блока
		cout << "Value " << i << ": ";		// ввод числа
		cin >> number;
		sum += number;
	}						// конец блока
	cout << "Five exquisite chiuces indeed! ";
	cout << "They sum tp " << sum << endl;		// вывод суммы
	cout << "and aferage to " << sum / 5 << ".\n";	// вывод среднего значения
	cout << "The Amazing Accounto bids you adieu!\n";
	return 0;
}
