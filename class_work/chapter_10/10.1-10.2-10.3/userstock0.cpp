// userstock0.cpp -- клиентская программа
// компилируется вместе с stock00.cpp
#include <iostream>
#include "stock00.h"

int main() {
	Stock fluffyTheCat;
	fluffyTheCat.acquire("NanoSmart", 20, 12.50);
	fluffyTheCat.show();
	fluffyTheCat.buy(15, 18.125);
	fluffyTheCat.show();
	fluffyTheCat.sell(400, 20.00);
	fluffyTheCat.show();
	fluffyTheCat.buy(300000, 40.125);
	fluffyTheCat.show();
	fluffyTheCat.sell(300000, 0.125);
	fluffyTheCat.show();
	return 0;
}