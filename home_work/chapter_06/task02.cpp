/*
* task02.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 6: Операторы ветвления и логические операции, Упражнения по программированию (Задача 2):
* Напишите программу, читающую в массив double до 10 значений пожертвований. (Или, если хотите, используйте шаблонный
* объект array.) Программа должна прекращать ввод при получении нечисловой величины. Она должна выдавать среднее
* значение полученных чисел, а так же количество значений в массиве, превышающих среднее.
*/
#include <iostream>

const int AR_SIZE = 10;

int main() {
	double donations[AR_SIZE];
	double sum = 0.0, average = 0.0;
	int i = 0, greaterThanAverage = 0;
	for (i = 0; i < AR_SIZE; ++i) {
		std::cout << "Enter amount " << i + 1 << " value: ";
		if ((std::cin >> donations[i]))		// проверка на числовой ввод
			sum += donations[i];		// сумма введённых значений, если проверка на ввод успешна
		else
			break;
	}
	if (sum > 0) {					// сумма будет не нулевая, если в массиве есть элементы
		average = sum / i;			// вычисление среднего значения
		for (int j = 0; j < AR_SIZE; ++j)
			if (donations[j] > average)	// вычисление количества элементов, больше среднего
				++greaterThanAverage;
			else
				continue;
	}
	std::cout << "Average = " << average << std::endl;
	std::cout << "Values greater than the average: " << greaterThanAverage << std::endl;
	return 0;
}
