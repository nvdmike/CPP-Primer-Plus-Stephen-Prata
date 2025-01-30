/*
* task08.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 6: Операторы ветвления и логические операции, Упражнения по программированию (Задача 8):
* Напишите программу, которая открывает текстовый файл, читает его символ за символом до самого конца и сообщает
* количество символов в файле.
*/
#include <iostream>
#include <fstream>	// поддержка файлового ввода-вывода
#include <cstdlib>	// поддержка exit()

const int SIZE = 60;

int main() {
	char fileName[SIZE];
	std::ifstream file;
	std::cout << "Enter name of data file: ";	// в качестве примера создан файл test.txt
	std::cin.getline(fileName, SIZE);
	file.open(fileName);
	if (!file.is_open()) {
		std::cout << "Could not open the file \"" << fileName << "\"" << std::endl;
		std::cout << "Progran terminating.\n";
		exit(EXIT_FAILURE);
	}
	std::string value;
	int count = 0;
	while (!file.eof()) {
		file >> value;
		count += value.length();
	}
	if (file.eof())
		std::cout << "End of file reached.\n";
	else if (file.fail())
		std::cout << "Data mismatch.\n";
	else
		std::cout << "Unknown errors.\n";
	if (count == 0)
		std::cout << "No data proceed.\n";
	else
		std::cout << "Items read: " << count << std::endl;
	file.close();
	return 0;
}
