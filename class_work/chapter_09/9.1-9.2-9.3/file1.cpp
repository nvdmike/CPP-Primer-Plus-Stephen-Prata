// file1.cpp -- пример программы, состоящей из трёх файлов
#include <iostream>
#include "coordin.h"	// шаблоны структур, прототипы функций

using namespace std;

int main() {
	rect rplace;
	polar pplace;
	cout << "Enter the x and y values: ";	// ввод значений x и y
	while (cin >> rplace.x >> rplace.y) {	// ловкое использование cin
		pplace = rectToPolar(rplace);
		showPolar(pplace);
		cout << "Next two numbers (q to quit): ";
			// ввод следующих двух чисел (q для завершения)
	}
	cout << "Done.\n";
	return 0;
}
