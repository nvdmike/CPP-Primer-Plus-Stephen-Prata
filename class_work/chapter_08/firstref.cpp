// firstref.cpp -- определение и использование ссылки
#include <iostream>

int main() {
	using namespace std;
	int rats = 101;
	int &rodents = rats;	// rodents является ссылкой
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	rodents++;
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	// некоторые реализации требуют для следующих адресов
	// выполнить приведение к типу unsigned
	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;
	return 0;
}
