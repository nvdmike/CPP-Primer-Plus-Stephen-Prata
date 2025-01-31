/*
* task04.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 3: Работа с данными, Упражнения по программированию (Задача 4):
* Напишите программу, которая запрашивает количество секунд в виде целого значения (используйте тип long или long long,
* если последний доступен) и затем отображает эквивалентное значение в сутках, часах, минутах и секундах. Для
* представления количества часов в сутках, количества минут в часе и количества секунд в минуте используйте
* символические константы. Результат выполнения программы должен выглядеть следующим образом:
* "Enter the number of seconds: 31600000
* 31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
*/
#include <iostream>

int main() {
	using namespace std;
	const long SEC_PER_MIN = 60;			// количество секунд в минуте
	const long SEC_PER_HRS = 60 * SEC_PER_MIN;	// количество секунд в часе
	const long SEC_PER_DAY = 24 * SEC_PER_HRS;	// количество секунд в дне
	cout << "Enter the number of seconds: ";
	long long seconds;
	cin >> seconds;
	int days = seconds / SEC_PER_DAY;
	int hours = (seconds - days * SEC_PER_DAY) / SEC_PER_HRS;
	int mins = ((seconds - days * SEC_PER_DAY) - hours * SEC_PER_HRS) / SEC_PER_MIN;
	int secs = ((seconds - days * SEC_PER_DAY) - hours * SEC_PER_HRS) - (mins * SEC_PER_MIN);
	cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << mins << " minutes, " << secs
	     << " seconds";
	return 0;
}
