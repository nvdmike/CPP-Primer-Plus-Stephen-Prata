/*
* task08b.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 7: Функции как программные модули C++, Упражнения по программированию (Задача 8, Вариант б):
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
const char SNAMES[SIZE][LENGHT] = {"Spring", "Summer", "Fall", "Winter"};
struct expenses {
	double expenses[SIZE];
};

void fill(const char[][LENGHT], expenses *exp);	// функция для изменения объекта array
void show(const char[][LENGHT], expenses *exp);	// функция, использующая объект array, но не изменяющая его

int main() {
	expenses exp;
	fill(SNAMES, &exp);
	show(SNAMES, &exp);
	return 0;
}

void fill(const char[][LENGHT], expenses *exp) {
	using namespace std;
	for (int i = 0; i < SIZE; ++i) {
		cout << "Enter " << SNAMES[i] << " expenses: ";	// ввод расходов по временам года
		cin >> exp->expenses[i];
	}
}

void show(const char[][LENGHT], expenses *exp) {
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";				// вывод расходов по временам года
	for (int i = 0; i < SIZE; ++i) {
		cout << SNAMES[i] << ": $" << exp->expenses[i] << endl;
		total += exp->expenses[i];
	}
	cout << "Total Expenses: $" << total << endl;	// вывод общей суммы расходов
}
