// not.cpp -- использование логической операции "Ќ≈"
#include <iostream>
#include <climits>

bool is_int(double);

int main() {
	using namespace std;
	double num;
	cout << "You, dude! Enter an integer value: ";		// запрос на ввод целочисленного значени¤
	cin >> num;
	while (!is_int(num)) {					// продолжать пока num не ¤вл¤етс¤ int
		cout << "Out of range -- please try again: ";	// выход за пределы диапазона
		cin >> num;
	}
	int val = int(num);					// приведение типа
	cout << "You've entered the integer " << val << "\nBye\n";
	return 0;
}

bool is_int(double x) {
	if (x <= INT_MAX && x >= INT_MIN)
		return true;
	else
		return false;
}
