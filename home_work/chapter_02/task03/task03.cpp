/*
* task03.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 2: Приступаем к изучению C++, Упражнения по программированию (Задача 3):
* Напишите программу на C++, которая использует три определяемых пользователем функции (включая main()) и генерирует
* следующий вывод:
* Three blind mice
* Three blind mice
* See how they run
* See how they run
* Одна функция, вызываемая два раза, должна генерировать первые две строки, а другая, также вызываемая два раза -
* оставшиеся строки.
*/
#include <iostream>

void ffunc(void);
void sfunc(void);

int main() {
	ffunc();
	ffunc();
	sfunc();
	sfunc();
	return 0;
}

void ffunc() {
	using namespace std;
	cout << "Three blind mice\n";
}

void sfunc() {
	using namespace std;
	cout << "See how they run" << endl;
}
