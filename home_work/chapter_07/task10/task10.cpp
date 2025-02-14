/*
* task10.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 7: Функции как программные модули C++, Упражнения по программированию (Задача 10):
* Спроектируйте функцию calculate(), которая принимает два значения типа double и указатель на функцию, принимающую два
* аргумента double и возвращающую значение double. Функция calculate() так же должна иметь тип double и возвращать
* значение, вычисленное функцией, которая задана указателем, используя аргумент double функции calculate(). Например,
* предположим, что имеется следующее определение функции add():
* double add(double x, double y) {
* 	return x + y;
* }
* Приведённый ниже вызов функции должен заставить calculate() передать значения 2.5 и 10.4 функции add() и вернуть её
* результат (12.9):
* double q = calculate(2.5, 10.4, add);
* Используйте в программе эти функции и ещё хотя бы одну дополнительную, которая подобна add(). В программе должен быть
* организован цикл, позволяющий пользователю вводить пары чисел. Для каждой пары calculate() должна вызывать add() и
* хотя бы ещё одну функцию такого рода. Если вы чувствуете себя уверенно, попробуйте создать массив указателей на
* функции, подобные add(), и организуйте цикл, применяя calculate() для вызова этих функций по их указателям. Подсказка:
* вот как можно объявить массив из трёх таких указателей:
* double (*pf[3])(double, double);
* Инициализировать такой массив можно с помощью обычного синтаксиса инициализации массивов и имён функций в качестве
* адресов.
*/
#include <iostream>

const int SIZE = 4;

void showMenu();
double calculate(double x, double y, double (*pt)(double, double));
double add(double x, double y);
double subtraction(double x, double y);
double multiplication(double x, double y);
double division(double x, double y);

int main() {
	int menu;
	double x, y;
	double (*pt[SIZE])(double, double) = {
		add, subtraction, multiplication, division
	};
	showMenu();
	while (std::cin >> menu) {
		switch (menu) {
		case 0:
			std::cout << "Enter two numbers to add: ";
			std::cin >> x >> y;
			std::cout << "Add result: " << calculate(x, y, pt[menu]) << std::endl;
			break;
		case 1:
			std::cout << "Enter two numbers to subtract: ";
			std::cin >> x >> y;
			std::cout << "Subtraction result: " << calculate(x, y, pt[menu]) << std::endl;
			break;
		case 2:
			std::cout << "Enter two numbers to multiply: ";
			std::cin >> x >> y;
			std::cout << "Multiplication result: " << calculate(x, y, pt[menu]) << std::endl;
			break;
		case 3:
			std::cout << "Enter two numbers to divide: ";
			std::cin >> x >> y;
			std::cout << "Division result: " << calculate(x, y, pt[menu]) << std::endl;
			break;
		}
		showMenu();
	}
	std::cout << "Bye!\n";
	return 0;
}

void showMenu() {
	std::cout << "[0] Add\t\t\t[1] Subtraction" << std::endl;
	std::cout << "[2] Multiplication\t[3] Division" << std::endl;
	std::cout << "Choose option: ";
}

double calculate(double x, double y, double (*pt)(double, double)) {
	return (*pt)(x, y);
}

double add(double x, double y) {
	return x + y;
}

double subtraction(double x, double y) {
	return x - y;
}

double multiplication(double x, double y) {
	return x * y;
}

double division(double x, double y) {
	return x / y;
}
