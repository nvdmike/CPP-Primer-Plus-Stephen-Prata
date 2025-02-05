/*
* task02.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 4: Составные типы, Упражнения по программированию (Задача 2):
* Перепишите листинг 4.4, применив класс C++ string вместо массивов char.
*/
#include <iostream>
#include <string>

int main() {
	using namespace std;
	string name;
	string dessert;
	cout << "Enter your name:\n";			// запрос имени
	getline(cin, dessert);				// читать до символа новой строки
	cout << "Enter your favorite dessert:\n";	// запрос любимого дессерта
	getline(cin, name);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}
