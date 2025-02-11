// ifelseif.cpp -- использование оператора if else if else
#include <iostream>

const int FAVE = 27;

int main() {
	using namespace std;
	int n;
	cout << "Enter a number in the range 1-100 to find: ";
	cout << "my favorite number: ";				// запрос на ввод числа из диапазона 1-100
	do {
		cin >> n;
		if (n < FAVE)
			cout << "Too low -- guess again: ";	// число слишком мало
		else if (n > FAVE)
			cout << "Too high -- guess again: ";	// число слишком велико
		else
			cout << FAVE << " is right!\n";		// число угадано
	} while (n != FAVE);
	return 0;
}
