/*
* task03.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 7: Функции как программные модули C++, Упражнения по программированию (Задача 3):
* Пусть имеется следующее объявление структуры:
* struct box {
* 	char maker[40];
* 	float height;
* 	float width;
* 	float lenght;
* 	float volume;
* };
* а. Напишите функцию, принимающую структуру box по значению и отображающую все её члены.
* б. Напишите функцию, принимающую адрес структуры box и устанавливающую значение члена volume равным произведению
* остальных трёх членов.
* в. Напишите простую программу, которая использует эти две функции.
*/
#include <iostream>

struct box {
	char maker[40];
	float height;
	float width;
	float lenght;
	float volume;
};

void displayBox(box *);
void displayBoxValues(box);

int main() {
	box b1 = { "MASTER", 1, 2, 3, 4 };
	displayBox(&b1);
	displayBoxValues(b1);
	return 0;
}

void displayBox(box *b) {
	b->volume = b->height * b->width * b->lenght;
}

void displayBoxValues(box b) {
	std::cout << "Maker: " << b.maker << "\n"
			  << "Height of box: " << b.height << "\n"
			  << "Width of box: " << b.width << "\n"
			  << "Lenght of box: " << b.lenght << "\n"
			  << "Volume of box: " << b.volume << "\n";
}