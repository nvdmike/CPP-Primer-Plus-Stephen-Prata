// waiting.cpp -- использованеи clock() в цикле переменной задержки
#include <iostream>
#include <ctime>	// описывает функции clock() и тип clock_t

int main() {
	using namespace std;
	cout << "Enter the delay time, in seconds: ";	// ввод времени задержки в секундах
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;		// преобразование в тики
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay)			// ожидание истечения времени
		;					// обратите внимание на точку с запятой
	cout << "done\a\n";
	return 0;
}
