// usenmsp.cpp -- использование пространств имён
#include <iostream>
#include "namesp.h"

void other(void);
void another(void);

int main(void) {
	using debts::debt;
	using debts::showDebt;
	debt golf = { { "Benny", "Goatsniff"}, 120.0 };
	showDebt(golf);
	other();
	another();
	return 0;
}

void other(void) {
	using std::cout;
	using std::endl;
	using namespace debts;
	person dg = { "Doodles", "Glister" };
	showPerson(dg);
	cout << endl;
	debt zippy[3];
	int i;
	for (i = 0; i < 3; ++i)
		getDebt(zippy[i]);
	for (i = 0; i < 3; ++i)
		showDebt(zippy[i]);
	cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
	return;
}

void another(void) {
	using pers::person;
	person collector = { "Milo", "Rightshift" } ;
	pers::showPerson(collector);
	std::cout << std::endl;
}
