// mixtypes.cpp -- некоторые комбинации типов
#include <iostream>

struct antatcica_years_end {
	int year;
	/* определение других нужных данных */
};

int main() {
	antatcica_years_end s01, s02, s03;
	s01.year = 1998;
	antatcica_years_end *pa = &s02;
	pa->year = 1999;
	antatcica_years_end trio[3];	// массив из трех структур
	trio[0].year = 2003;
	std::cout << trio->year << std::endl;
	const antatcica_years_end *arp[3] = { &s01, &s02, &s03 };
	std::cout << arp[1]->year << std::endl;
	const antatcica_years_end **ppa = arp;
	auto ppb = arp;			// автоматическое выведение типа в C++
	// или можно использовать antatcica_years_end **ppb = arp;
	std::cout << (*ppa)->year << std::endl;
	std::cout << (*(ppb+1))->year << std::endl;
	return 0;
}
