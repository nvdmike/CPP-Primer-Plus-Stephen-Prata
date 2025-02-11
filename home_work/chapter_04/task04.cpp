/*
* task04.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 4: Составные типы, Упражнения по программированию (Задача 5):
* Напишите программу, которая приглашает пользователя ввести его имя и фамилию, а затем построит, сохранит и отобразит
* третью строку, состоящую из фамилии, за которой следует запятая, пробел и имя. Используйте объекты string и методы из
* заголовочного файла string. Пример запуска должен выглядеть так:
* Enter your first name: Flip
* Enter your last name: Fleming
* Here's the information in a single string: Fleming, Flip
*/
#include <iostream>
#include <string>

int main() {
	using namespace std;
	string fName;
	string lName;
	string fullName;
	cout << "Enter your first name: ";
	getline(cin, fName);
	cout << "Enter your last name: ";
	getline(cin, lName);
	fullName = lName + ", " + fName;
	cout << "Here's the information in a single string: " << fullName << endl;
	return 0;
}
