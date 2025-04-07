//usetime1.cpp -- использование второй черновой версии класса Time
//компилировать usetime1.cpp и mytime1.cpp вместе
#include <iostream>
#include "mytime1.h"

int main() {
	using std::cout;
	using std::endl;
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;
	cout << "planning time = ";	// врем¤ на планирование
	planning.show();
	cout << endl;
	cout << "coding time = ";	// врем¤ на кодирование
	coding.show();
	cout << endl;
	cout << "fixing time = ";	// врем¤ на исправление
	fixing.show();
	cout << endl;
	total = coding + fixing;
	// нотаци¤ с операцией
	cout << "coding + fixing = ";	// кодирование + исправление
	total.show();
	cout << endl;
	Time morefixing(3, 28);
	cout << "more fixing time = ";	// дополнительное врем¤ на исправление
	morefixing.show();
	cout << endl;
	total = morefixing.operator+(total);
	// нотаци¤ с функцией
	cout << "morefixing.operator+(total) = ";
	total.show();
	cout << endl;
	return 0;
}
