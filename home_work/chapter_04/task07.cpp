/*
* task07.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 4: Составные типы, Упражнения по программированию (Задача 7):
* Вильям Вингейт (William Wingate) заведует службой анализа рынка пиццы. О каждой пицце он записывает следующую
* информацию:
* - наименование компании - производителя пиццы, которое может состоять из более чем одного слова;
* - диаметр пиццы;
* - вес пиццы.
* Разработайте структуру, которая может содержать всю эту информацию, и напишите программу, использующую структурную
* переменную этого типа. Программа должна запрашивать у пользователя каждый из перечисленных показателей и затем
* отображать введённую информацию. Применяйте cin (или его методы) и cout.
*/
#include <iostream>

struct PizzaCompanies {
	char name[20];
	int diameter;
	float weight;
};

int main() {
	using namespace std;
	PizzaCompanies pc;
	cout << "Enter company name: ";
	cin.getline(pc.name, 20);
	cout << "Enter the diameter of the pizza: ";
	cin >> pc.diameter;
	cout << "Enter the weight of the pizza: ";
	cin >> pc.weight;
	cout << "Name: " << pc.name << ", diameter: " << pc.diameter << ", weight: " << pc.weight << "\n";
	return 0;
}
