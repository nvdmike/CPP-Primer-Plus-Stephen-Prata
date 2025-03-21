// usestock1.cpp -- использование класса Stock
// компилировать вместе с stock10.cpp
#include <iostream>
#include "stock10.h"

int main() {
	{
		using std::cout;
		// использование конструкторов для создания новых объектов
		cout << "Using constructors to create new objects\n";
		Stock stock1("NanoSmart", 12, 20.0);			// первый синтаксис
		stock1.show();
		Stock stock2 = Stock("Boffo Objects", 2, 2.0);		// второй синтаксис
		stock2.show();
		// присваивание stock1 объекту stock2
		cout << "Assigning stock1 to stock2:\n";
		stock2 = stock1;
		// вывод stock1 и stock2
		cout << "Listing stock1 and stock2:\n";
		stock1.show();
		stock2.show();
		// использование конструктора для сброса объекта
		cout << "Using a constructor to reset ab object\n";
		stock1 = Stock("Nifty Foods", 10, 50.0);		// временный объект
		cout << "Revised stock1:\n";
		stock1.show();
		cout << "Done\n";
	}
	return 0;
}
