/*
* task09.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 4: Составные типы, Упражнения по программированию (Задача 9):
* Выполните упражнение 6, но вместо объявления массива из трех структур CandyBar используйте операцию new для
* динамического размещения массива.
*/
#include <iostream>

struct CandyBar {
	char name[20];
	float weight;
	int calories;
};

int main() {
	CandyBar* ps = new CandyBar[3];
	ps[0] = { "Mocha Munch", 2.3, 350 };
	ps[1] = { "Baby Ice", 3.4, 505 };
	ps[2] = { "Vanilla Shugar", 5.2, 850 };
	std::cout << "Name: " << ps->name << ", Weight: " << ps->weight << ", Calories: " << ps->calories << std::endl;
	std::cout << "Name: " << (ps + 1)->name << ", Weight: " << (ps + 1)->weight << ", Calories: " << (ps + 1)->calories
		  << std::endl;
	std::cout << "Name: " << (ps + 2)->name << ", Weight: " << (ps + 2)->weight << ", Calories: " << (ps + 2)->calories
		  << std::endl;
	return 0;
}
