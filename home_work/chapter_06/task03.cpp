/*
* task03.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 6: Операторы ветвления и логические операции, Упражнения по программированию (Задача 3):
* Напишите предшественник программы, управляемой меню. Она должна отображать меню из четырёх пунктов, каждый из них
* помечен буквой. Если пользователь вводит букву, отличающуюся от четырёх допустимых, программа должна повторно
* приглашать его ввести правильное значение до тех пор, пока он этого не сделает. Затем она должна выполнить некоторое
* простое действие на основе пользовательского выбора. Работа программы должна выглядеть примерно так:
* Please enter one of the following choices:
* c) carnivore	p) pianist
* t) tree		g) game
* f
* Please enter a c, p, t, or g: q
* Please enter a c, p, t, or g: t
* A maple is tree.
*/
#include <iostream>

void showmenu();
void carnivore();
void pianist();
void tree();
void game();

int main() {
	showmenu();
	char choice;
	while ((std::cin >> choice)) {
		if ('c' == choice) {
			carnivore();
			break;
		} else if ('p' == choice) {
			pianist();
			break;
		} else if ('t' == choice) {
			tree();
			break;
		} else if ('g' == choice) {
			game();
			break;
		} else
			std::cout << "Please enter a c, p, t, or g: ";
	}
	return 0;
}

void showmenu() {
	std::cout << "Please enter one of the following choices:\n"
		<< "c) carnivore\tp) pianist\n"
		<< "t) tree\t\tg) game" << std::endl;
}

void carnivore() {
	std::cout << "Tigers are carnivores." << std::endl;
}

void pianist() {
	std::cout << "Pianist is a musician." << std::endl;
}

void tree() {
	std::cout << "A maple is tree." << std::endl;
}

void game() {
	std::cout << "Preference is a game." << std::endl;
}
