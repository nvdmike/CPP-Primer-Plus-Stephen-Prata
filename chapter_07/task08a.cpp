/*
* task08a.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 7: Функции как программные модули C++, Упражнения по программированию (Задача 8, Вариант а):
* Вернитесь к программе из листинга 7.15, не использующей класс array. Напишите следующие две весрии.
* а. Используйте обычный массив из const char * для строковых представлений времён года и обычный массив double для
* расходов.
* б. Используйте обычный массив из const char * для строковых представлений времён года и структуру, единственный член
* которой является обычным массивом из double для расходов. (Это очень похоже на базовое проектное решение для класса
* array.)
*/
#include <iostream>
#include <array>
#include <string>
// константные данные
const int SIZE = 4;
const int LENGHT = 7;
const char SNAMES[SIZE][LENGHT] = { "Spring", "Summer", "Fall", "Winter" };

void fill(const char[][LENGHT], double[]);	// функция для изменения объекта array
void show(const char[][LENGHT], double[]);	// функция, использующая объект array, но не изменяющая его

int main() {
	double expenses[SIZE];
	fill(SNAMES, expenses);
	show(SNAMES, expenses);
	return 0;
}

void fill(const char[][LENGHT], double *expenses) {
	using namespace std;
	for (int i = 0; i < SIZE; ++i) {
		cout << "Enter " << SNAMES[i] << " expenses: ";	// ввод расходов по временам года
		cin >> expenses[i];
	}
}

void show(const char[][LENGHT], double *expenses) {
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";				// вывод расходов по временам года
	for (int i = 0; i < SIZE; ++i) {
		cout << SNAMES[i] << ": $" << expenses[i] << endl;
		total += expenses[i];
	}
	cout << "Total Expenses: $" << total << endl;	// вывод общей суммы расходов
}
