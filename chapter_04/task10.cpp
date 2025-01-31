/*
* task10.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 4: Составные типы, Упражнения по программированию (Задача 10):
* Напишите программу, которая приглашает пользователя ввести три результата забега на 40 ярдов (или 40 метров, если
* желаете) и затем отображает эти значения и их среднее. Для хранения данных применяйте объект array. (Если объект array
* не доступен, воспользуйтесь встроенным массивом.)
*/
#include <iostream>
#include <array>

int main() {
	std::array<float, 3> results;
	std::cout << "Enter first result: ";
	std::cin >> results[0];
	std::cout << "Enter seconsd result: ";
	std::cin >> results[1];
	std::cout << "Enter third result: ";
	std::cin >> results[2];
	std::cout << "First result: " << results[0] << ", seconsd result: " << results[1] << ", third result: "
		  << results[2] << ", average result: " << (results[0] + results[1] + results[2]) / 3 << std::endl;
	return 0;
}
