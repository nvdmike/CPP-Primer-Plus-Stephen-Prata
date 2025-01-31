/*
* task01.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 3: Работа с данными, Упражнения по программированию (Задача 1):
* Напишите короткую программу, которая запрашивает рост в дюймах и преобразует их в футы и дюймы. Программа должна
* использовать символ подчёркивания для обозначения позиции, где будет производиться ввод. Для представления
* коэффициента преобразования используйте символьную константу const.
*/
#include <iostream>

int main() {
	using namespace std;
	const int INCHES_PER_FEET = 12;
	cout << "Enter your height in inches:__\b\b";
	int inches;
	cin >> inches;
	cout << "Your height is " << inches / INCHES_PER_FEET << " feet(s) and "<< inches % INCHES_PER_FEET << " inches"
	     << endl;
	return 0;
}
