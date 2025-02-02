// nested.cpp -- вложенные циклы и двумерный массив
#include <iostream>
const int Cities = 5;
const int Years = 4;
int main()
{
	using namespace std;
	const char * cities[Cities] =	// массив указателей на 5 строк
	{
		"Gribble City",
		"Gribbletown",
		"New Gribble",
		"San Gribble",
		"Gribble Vist"
	};
	int maxtemps[Years][Cities] =	// двумерный массив
	{
		{96, 100, 87, 101, 105},	// значени€ дл€ maxtemps[0]
		{96, 98, 91, 107, 104},		// значени€ дл€ maxtemps[1]
		{97, 101, 93, 108, 107},	// значени€ дл€ maxtemps[2]
		{98, 103, 95, 109, 108},	// значени€ дл€ maxtemps[3]
	};
	cout << "Maximum temperatures for 2008-2011\n\n";
	// ћаксимальные температуры в 2008-2011 гг.
	for (int city = 0; city < Cities; ++city)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year)
			cout << maxtemps[year][city] << "\t";
		cout << endl;
	}
	return 0;
}