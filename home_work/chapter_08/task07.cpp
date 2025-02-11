/*
* task07.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 8: Дополнительные сведения о функциях, Упражнения по программированию (Задача 7):
* Измените программу из листинга 8.14 так, чтобы использовать две шаблонных функции по имени SumArray(), возвращающие
* сумму содержимого массива вместо его отображения. Программа должна сообщать общее количество предметов и сумму всех
* задолженностей (debts).
*/
#include <iostream>

struct debts {
	char name[50];
	double amount;
};

template <typename T>
T sumArray(T arr[], int n);
template <typename T>
T sumArray(T *arr[], int n);

int main() {
	using namespace std;
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	struct debts mr_E[3] = {
		{ "Ima Wolfe", 2400.0 },
		{ "Ura Foxe", 1300.0 },
		{ "Iby Stout", 1800.0 }
	};
	double *pd[3];
	for (int i = 0; i < 3; ++i)
		pd[i] = &mr_E[i].amount;
	cout << "Listing Mr. E's sum of things: " << sumArray(things, 6) << endl;
	cout << "Listing Mr. E's sum of debts: " << sumArray(pd, 3) << endl;
	return 0;
}

template <typename T>
T sumArray(T arr[], int n) {
	T sum = 0;
	for (int i = 0; i < n; ++i)
		sum += arr[i];
	return sum;
}

template <typename T>
T sumArray(T *arr[], int n) {
	T sum = 0;
	for (int i = 0; i < n; ++i)
		sum += *arr[i];
	return sum;
}
