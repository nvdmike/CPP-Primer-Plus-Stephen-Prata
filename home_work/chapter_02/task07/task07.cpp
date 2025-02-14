/*
* task07.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 2: Приступаем к изучению C++, Упражнения по программированию (Задача 7):
* Напишите программу, которая выдаёт запрос на ввод значений часов и минут. Функция main() должна передать эти два
* значения функции, имеющей тип void, которая отобразит эти два значения в следующем виде:
* Enter the number of hours: 9
* Enter the number of minutes: 28
* Time: 9:28
*/
#include <iostream>

void showTime(int, int);

using namespace std;

int main() {
	cout << "Enter the number of hours: ";
	int hours;
	cin >> hours;
	cout << "Enter the number of minutes: ";
	int minutes;
	cin >> minutes;
	showTime(hours, minutes);
	return 0;
}

void showTime(int h, int m) {
	cout << "Time: " << h << ":" << m;
}
