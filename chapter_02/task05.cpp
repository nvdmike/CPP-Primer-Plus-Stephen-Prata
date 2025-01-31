/*
* task05.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 2: Приступаем к изучению C++, Упражнения по программированию (Задача 5):
* Напишите программу, в которой функция main() вызывает определяемую пользователем функцию, принимающую в качестве
* аргумента значение температуры по Цельсию и возвращающая эквивалентное значение температуры по Фаренгейту. Программа
* должна выдать запрос на ввод значения по Цельсию и отобразить следующий результат:
* Please enter a Celsius value: 20
* 20 degrees Celsius is 68 degrees Fahrenheits.
* Вот формула для этого преобразования:
* Температура в градусах по Фаренгейту = 1,8 * Температура в градусах по Цельсию + 32
*/
#include <iostream>

int main() {
	using namespace std;
	cout << "Please enter a Celsius value: ";
	int celsius;
	cin >> celsius;
	double fahrenheits = 1.8 * celsius + 32;
	cout << celsius << " degrees Celsius is " << fahrenheits << " degrees Fahrenheits.";
	return 0;
}
