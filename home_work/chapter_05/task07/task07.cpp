/*
* task07.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 5: Циклы и выражения отношений, Упражнения по программированию (Задача 7):
* Разработайте структуру по имени car, которая будет хранить следующую информацию  об автомобиле: название производителя
* в виде строки в символьном массиве или в объекте string, а так же год выпуска автомобиля в виде целого числа. Напишите
* программу, которая запросит пользователя, сколько автомобилей необходимо включить в каталог. Затем программа должна
* применить new для создания динамического массива структур car указанного пользователем размера. Далее она должна
* пригласить пользователя ввести название производителя и год выпуска для наполнения данными каждой структуры в массиве
* (см. главу 4). И, наконец, она должна отобразить содержимое каждой структуры. Пример запуска программы должен
* выглядеть подобно следующему:
* How many vehicles need to be included to the catalog? 2
* Car #1:
* Enter manufacturer: Hudson Hornet
* Enter year of production: 1952
* Car #2:
* Enter manufacturer: Kaiser
* Enter year of production: 1951
* Your collection:
* 1952 Hudson Hornet
* 1951 Kaiser
*/
#include <iostream>
#include <string>

struct car {
	std::string name;
	int prodDate;
};

int main() {
	std::cout << "How many vehicles need to be included to the catalog? ";
	int cnt;
	std::cin >> cnt;
	std::cin.get();
	car* catalog = new car[cnt];
	int i = 0;
	for (int i = 0; i < cnt; i++) {
		std::cout << "Car #" << i + 1 << ":\n";
		std::cout << "Enter manufacturer: ";
		std::getline(std::cin, catalog[i].name);
		std::cout << "Enter year of production: ";
		std::cin >> catalog[i].prodDate;
		std::cin.get();
	}
	std::cout << "Your collection:\n";
	for (int i = 0; i < cnt; i++)
		std::cout << catalog[i].prodDate << " " << catalog[i].name << std::endl;
	return 0;
}
