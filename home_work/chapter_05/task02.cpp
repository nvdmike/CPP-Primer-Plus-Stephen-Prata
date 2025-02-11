/*
* task02.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 5: Циклы и выражения отношений, Упражнения по программированию (Задача 2):
* Перепишите код из листинга 5.4 с использованием объекта array вместо встроенного массива и типа long double вместо
* long long. Найдите значение 100!
*/
#include <iostream>
#include <array>

const int AR_SIZE = 100;

int main() {
	std::array<long double, AR_SIZE> factorials;
	factorials[0] = factorials[1] = 1L;
	for (int i = 2; i < AR_SIZE; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < AR_SIZE; i++)
		std::cout << i << "! = " << factorials[i] << std::endl;
	return 0;
}
