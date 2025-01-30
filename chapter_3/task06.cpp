/*
* task06.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 3: Работа с данными, Упражнения по программированию (Задача 6):
* Напишите программу, которая запрашивает количество миль, пройденных автомобилем, и количество галлонов
* израсходованного бензина, а затем сообщает значение количества миль на галлон. Или, если хотите, программа может
* запрашивать расстояние в километрах, а объём бензина в литрах, и выдаёт результат в виде количества литров на 100
* километров.
*/
#include <iostream>

int main() {
	using namespace std;
	cout << "Enter the number of miles traveled by the vehicle: ";
	int miles;
	cin >> miles;
	cout << "Enter fuel consumption: ";
	int fuel;
	cin >> fuel;
	float fuelPerMile = float(miles) / float(fuel);
	cout << "Fuel consumption per mile is: " << fuelPerMile << endl;
	return 0;
}
