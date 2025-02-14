/*
* task02.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 2: Приступаем к изучению C++, Упражнения по программированию (Задача 2):
* Напишите программу на C++, которая выдаёт запрос на ввод расстояния в фарлонгах и преобразует его в ярды. (Один
* фарлонг равен 220 ярдам, или 201 168 м.)
*/
#include <iostream>

int main() {
	using namespace std;
	cout << "Enter the distance in furlongs: ";
	int furlongs;
	cin >> furlongs;
	cout << furlongs << " furlongs = " << furlongs * 228 << " yards.";
	return 0;
}
