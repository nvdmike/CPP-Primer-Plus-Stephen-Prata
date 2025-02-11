// nested.cpp -- вложенные циклы и двумерный массив
#include <iostream>

const int CITIES = 5;
const int YEARS = 4;

int main() {
	using namespace std;
	const char *cities[CITIES] = {	// массив указателей на 5 строк
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vist"
	};
	int maxtemps[YEARS][CITIES] = {	// двумерный массив
		{96, 100, 87, 101, 105},	// значени¤ для maxtemps[0]
		{96, 98, 91, 107, 104},		// значени¤ для maxtemps[1]
		{97, 101, 93, 108, 107},	// значени¤ для maxtemps[2]
		{98, 103, 95, 109, 108},	// значени¤ для maxtemps[3]
	};
	cout << "Maximum temperatures for 2008-2011\n\n";
	// максимальные температуры в 2008-2011 гг.
	for (int city = 0; city < CITIES; ++city) {
		cout << cities[city] << ":\t";
		for (int year = 0; year < YEARS; ++year)
			cout << maxtemps[year][city] << "\t";
		cout << endl;
	}
	return 0;
}
