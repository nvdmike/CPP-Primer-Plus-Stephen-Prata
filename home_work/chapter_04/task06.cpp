/*
* task06.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 4: Составные типы, Упражнения по программированию (Задача 6):
* Структура CandyBar включает три члена, как описано в предыдущем упражнении. Напишите программу, которая создаёт массив
* из трёх структур CandyBar, инициализирует их значения по вашему усмотрению и затем отображает содержимое каждой
* структуры.
*/
#include <iostream>

struct CandyBar {
	char name[20];
	float weight;
	int calories;
};

int main() {
	CandyBar snack[3] = {
		{ "Mocha Munch", 2.3, 350 },
		{ "Baby Ice", 3.4, 505 },
		{ "Vanilla Shugar", 5.2, 850 }
	};
	std::cout << "Name: " << snack[0].name << ", Weight: " << snack[0].weight << ", Calories: " << snack[0].calories
		  << std::endl;
	std::cout << "Name: " << snack[1].name << ", Weight: " << snack[1].weight << ", Calories: " << snack[1].calories
		  << std::endl;
	std::cout << "Name: " << snack[2].name << ", Weight: " << snack[2].weight << ", Calories: " << snack[2].calories
		  << std::endl;
	return 0;
}
