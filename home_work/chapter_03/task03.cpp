/*
* task03.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 3: Работа с данными, Упражнения по программированию (Задача 3):
* Напишите программу, которая запрашивает широту в градусах, минутах и секундах, после чего отображает широту в
* десятичном формате. В одной минуте 60 угловых секунд, а в одном градусе 60 угловых минут; представье эти значения с
* помощью символических констант. Для каждого вводимого значения должна использоваться отдельная переменнная. Результат
* выполнения программы должен выглядеть следующим образом:
* Enter a latitude in degrees, minutes and seconds:
* First, enter the degrees: 37
* Next, enter the minutes of arc: 51
* Finally, enter the seconds of arc: 19
* 37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
*/
#include <iostream>

int main() {
	using namespace std;
	const int SEC_PER_MIN = 60;
	const int MIN_PER_DEG = 60;
	float  deg, min, sec;
	cout << "Enter a latitude in degrees, minutes and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> deg;
	cout << "Next, enter the minutes of arc: ";
	cin >> min;
	cout << "Finally, enter the seconds of arc: ";
	cin >> sec;
	float degreesFormat = deg + min / SEC_PER_MIN + sec / (SEC_PER_MIN * MIN_PER_DEG);
	cout << deg << " degrees, " << min << " minutes, " << sec << " seconds = " << degreesFormat << " degrees" << endl;
	return 0;
}
