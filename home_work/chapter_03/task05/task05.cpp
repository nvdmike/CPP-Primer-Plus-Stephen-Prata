/*
* task05.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 3: Работа с данными, Упражнения по программированию (Задача 5):
* Напишите программу, которая запрашивает текущую численность населения Земли и текущую численность населения США (или
* любой другой страны). Сохраните эту информацию в переменных типа long long. В качестве результата программа должна
* отображать процентное соотношение численности населения США (или любой другой страны) и всего мира. Результат
* выполнения прораммы должен выглядеть следующим образом:
* Enter the world's population: 6898758899
* Enter the population of any country: 310783781
* The population of chosed country is 4.50492% of the world population.
* Можете поискать в Интернете более точные значения.
*/
#include <iostream>

int main() {
	using namespace std;
	cout << "Enter the world's population: ";
	long long wPopulation;
	cin >> wPopulation;
	cout << "Enter the population of any country: ";
	long long cPopulation;
	cin >> cPopulation;
	double correlation = double(cPopulation) / double(wPopulation) * 100;
	cout << "The population of chosed country is " << correlation << "% of the world population." << endl;
	return 0;
}
