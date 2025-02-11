/*
* task08.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 4: Составные типы, Упражнения по программированию (Задача 8):
* Выполните упражнение 7, но с применением операции new для размещения структуры в свободном хранилище вместо объявления
* структурной переменной. Кроме того, сделайте так, чтобы программа сначала запрашивала диаметр пиццы, а потом
* наименование компании.
*/
#include <iostream>

struct PizzaCompanies {
	char name[20];
	int diameter;
	float weight;
};

int main() {
	using namespace std;
	PizzaCompanies* pc = new PizzaCompanies;
	cout << "Enter the diameter of the pizza: ";
	(cin >> pc->diameter).get();
	cout << "Enter company name: ";
	cin.getline(pc->name, 20);
	cout << "Enter the weight of the pizza: ";
	cin >> pc->weight;
	cout << "Name: " << pc->name << ", diameter: " << pc->diameter << ", weight: " << pc->weight << "\n";
	return 0;
}
