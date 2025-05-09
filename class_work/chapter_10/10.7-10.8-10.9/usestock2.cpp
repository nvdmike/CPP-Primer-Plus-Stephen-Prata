// usestock2.cpp -- использование класса Stock
// компилировать вместе с stock20.cpp
#include <iostream>
#include "stock20.h"

const int STKS = 4;

int main() {
	// создание массива инициализированных объектов
	Stock stocks[STKS] = {
		Stock("NanoSmart", 12, 20.0),
		Stock("Boffo Objects", 200, 2.0),
		Stock("Monolithic Obelisks", 130, 3.25),
		Stock("Fleep Enterprises", 60, 6.5)
	};
	std::cout << "Stock holdings:\n";
	int st;
	for (st = 0; st < STKS; ++st)
		stocks[st].show();
	// установка указателя на первый элемент
	const Stock *top = &stocks[0];
	for (st = 1; st < STKS; ++st)
		top = &top->topVal(stocks[st]);
	// теперь top указывает на самый ценный пакет акций
	std::cout << "\nMost valuable holding:\n";
	top->show();
	return 0;
}
