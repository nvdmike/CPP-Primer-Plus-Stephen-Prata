/*
* task04.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 8: Дополнительные сведения о функциях, Упражнения по программированию (Задача 4):
* Ниже представлена общая структура программы. Завершите программу, создав соответствующие функции и прототипы. Обратите
* внимание, что в программе должны быть две функции show(), и каждая из них использует аргументы по умолчанию. Где
* необходимо, используйте const. Функция set() должна использовать операцию new для выделения достаточного пространства
* памяти под хранение заданной строки. Используемые здесь методы аналогичны методам, применяемым при проектировании и
* реализации классов. (В зависимости от используемого компилятора, может понадобиться изменить имена заголовочных файлов
* и удалить директиву using.)
*/
#include <iostream>
#include <cstring>	// для strlen(), strcpy()

using namespace std;

struct stringy {
	char *str;	// указывает на строку
	int ct;		// длина строки (не считая символа '\0')
};
// здесь размещаются прототипы функций set() и show()
void set(stringy &st, const char *str);
void show(const stringy &st, int n = 1);
void show(const char *str, int n = 1);

int main() {
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);	// первым аргументом является ссылка, выделяет пространство для хранения копии testing,
				// использует аргмент типа srr структуры beany как указатель на новый блок, копирует
				// testing в новый блок и создаёт элемент ct структуры beany
	show(beany);		// выводит строковый член структуры один раз
	show(beany, 2);		// выводит строковый член структуры два раза
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);		// выводит строку testing один раз
	show(testing, 3);	// выводит строку testing три раза
	show("Done!");
	return 0;
}

void set(stringy &st, const char *str) {
	st.ct = strlen(str) + 1;
	st.str = new char[st.ct];
	strcpy_s(st.str, st.ct, str);	// в реализации C++ Visual Studio 2025 функция strcpy() не работает, поэтому она
					// была заменена на strcpy_s(), которая принмиает 3 параметра: массив, в который
					// строка будет записана, длина массива и строка.
}

void show(const stringy &st, int n) {
	for (int i = 0; i < n; ++i)
		cout << st.str << endl;
}

void show(const char *str, int n) {
	for (int i = 0; i < n; ++i)
		cout << str << endl;
}
