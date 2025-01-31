/*
* task04.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 2: Приступаем к изучению C++, Упражнения по программированию (Задача 4):
* Напишите программу, которая предлагает пользователю ввести свой возраст. Затем программа должна отобразить возраст в
* месяцах:
* Enter your age: 29
* Your age in months is 348.
*/
#include <iostream>

int main() {
	using namespace std;
	cout << "Enter your age: ";
	int age;
	cin >> age;
	cout << "Your age in months is " << age * 12 << ".";
	return 0;
}
