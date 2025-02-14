/*
* task02.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 8: Дополнительные сведения о функциях, Упражнения по программированию (Задача 2):
* Структура CandyBar содержит три члена. Первый член хранит название коробки конфет. Второй - её вес (который может
* иметь дробную часть), а третий - количество калорий (целое значение). Напишите программу, использующую функцию,
* которая принимает в качестве аргументов ссылку на CandyBar, указатель на char, значение double и значение int. Функция
* использует три последних значения для установки соответствующих членов структуры. Три последних аргумента должны иметь
* значения по умолчанию: "Millenium Munch", 2.85 и 350. Кроме того, программа должна использовать функцию, которая
* принимает в качестве аргумента ссылку на CandyBar и отображает содержимое этой структуры. Где необходимо, используйте
* const.
*/
#include <iostream>

struct сandyBar {
	const char *name;
	double weight;
	int calories;
};

void setCandyBar(сandyBar &cb, const char *n = "Millenium Munch", double w = 2.85, int c = 350);
void showCandyBar(сandyBar &cb);

int main() {
	сandyBar cb;
	setCandyBar(cb);
	showCandyBar(cb);
	setCandyBar(cb, "Vanilla Ice", 1.35, 459);
	showCandyBar(cb);
	return 0;
}

void setCandyBar(сandyBar &cb, const char *n, double w, int c) {
	cb.name = n;
	cb.weight = w;
	cb.calories = c;
}

void showCandyBar(сandyBar &cb) {
	std::cout << "Name: " << cb.name << std::endl;
	std::cout << "Weight: " << cb.weight << std::endl;
	std::cout << "Calories: " << cb.calories << std::endl;
}
