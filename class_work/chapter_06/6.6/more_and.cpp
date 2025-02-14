// more_and.cpp -- использование логической операции "»"
#include <iostream>

const char *qualify[4] = {		// массив указателей на строки
	"10,000-meter race.\n",		// забег на 10 000 метров
	"mud tug-of-war.\n",		// перет¤гивание каната в гр¤зи
	"masters canoe jousting.\n",	// сост¤зание мастеров каноэ
	"pie-throwing festival.\n"	// фестиваль по бросанию пирожков
};

int main() {
	using namespace std;
	int age;
	cout << "Enter your age in years: ";			// запрос возраста в годах
	cin >> age;
	int index;
	if (age > 17 && age < 35)
		index = 0;
	else if (age >= 35 && age < 50)
		index = 1;
	else if (age >= 50 && age < 65)
		index = 2;
	else
		index = 3;
	cout << "Your qualify for the " << qualify[index];	// вывод рекомендованного результата
	return 0;
}