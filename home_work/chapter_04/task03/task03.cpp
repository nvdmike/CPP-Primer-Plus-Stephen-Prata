/*
* task03.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 4: Составные типы, Упражнения по программированию (Задача 3):
* Напишите программу, которая запрашивает у пользователя имя, фамилию, а затем конструирует, сохраняет и отображает
* третью строку, состоящую из фамилии пользователя, за которой следует запятая, пробел и его имя. Используйте массивы
* char и функции из заголовочного файла cstring. Пример запуска должен выглядеть так:
* Enter your first name: Flip
* Enter your last name: Fleming
* Here's the information in a single string: Fleming, Flip
*/
#include <iostream>
#include <cstring>

int main() {
	using namespace std;
	char fName[20];
	char lName[20];
	char fullName[42];
	cout << "Enter your first name: ";
	cin.getline(fName, 20);
	cout << "Enter your last name: ";
	cin.getline(lName, 20);
	strcpy_s(fullName, lName);
	strcat_s(fullName, ", ");
	strcat_s(fullName, fName);
	cout << "Here's the information in a single string: " << fullName << endl;
	return 0;
}
