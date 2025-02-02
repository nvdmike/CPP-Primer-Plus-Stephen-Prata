/*
* task06.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 5: Циклы и выражения отношений, Упражнения по программированию (Задача 6):
* Выполните упражнение 5, но используя двумерный массив для сохранения данных о месячных продажах за 3 года. Выдайте
* общую сумму продаж за каждый год и за все годы вместе.
*/
#include <iostream>

const int YEARS = 3;
const int MONTHS = 12;

int main() {
	using namespace std;
	const char* months[MONTHS] = {
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	int sales[YEARS][MONTHS];
	int allSum = 0;
	for (int i = 0; i < YEARS; i++) {
		cout << "Year: " << i + 1 << "\n";
		int sum = 0;
		for (int j = 0; j < MONTHS; j++) {
			cout << "Enter the number of books sold during " << months[j] << ": ";
			cin >> sales[i][j];
			sum += sales[i][j];
		}
		cout << "The sum of sales for the year is: " << sum << "\n";
		allSum += sum;
	}
	cout << "The sum of sales for all year is: " << allSum;
	return 0;
}
