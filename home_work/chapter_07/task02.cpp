/*
* task02.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 7: Функции как программные модули C++, Упражнения по программированию (Задача 2):
* Напишите программу, которая запрашивает у пользователя 10 результатов игры в гольф, сохраняя их в массиве. При этом
* необходимо обеспечить возможность прекращения ввода до ввода всех 10 результатов. Программа должна отобразить все
* результаты в одной строке и сообщить их среднее значение. Реализуйте ввод, отображение и вычисление среднего в трёх
* отдельных функциях, работающих с массивами.
*/
#include <iostream>

const int SIZE = 10;

int setArray(int ar[], int res);
void showArray(const int ar[], int size);
double average(const int ar[], int size);

int main() {
	int results[SIZE];
	int n = setArray(results, SIZE);
	showArray(results, n);
	std::cout << "Average result: " << average(results, n);
	return 0;
}

int setArray(int ar[], int size) {
	int res;
	int i;
	for (i = 0; i < size; ++i) {
		std::cout << "Enter #" << i + 1 << " result of a game: ";
		std::cin >> res;
		if (!std::cin) {
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "Error. Input process terminated.\n";
			break;
		}
		else if (res < 0)
			break;
		ar[i] = res;
	}
	return i;
}

void showArray(const int ar[], int size) {
	std::cout << "Results: ";
	for (int i = 0; i < size; ++i)
		std::cout << ar[i] << " ";
}

double average(const int ar[], int size) {
	double sum = 0.0;
	for (int i = 0; i < size; ++i)
		sum += ar[i];
	return sum / size;
}
