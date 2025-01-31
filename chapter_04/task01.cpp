/*
* task01.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 4: Составные типы, Упражнения по программированию (Задача 1):
* Напишите программу C++, которая запрашивает и отображает информацию, как показано в следующем примере вывода:
* What is your first name? Betty Sue
* What is your last name? Yewe
* What letter grade do you deserve? B
* What is your age? 22
* Name: Yewe, Betty Sue
* Grade: C
* Age: 22
* Обратите внимание, что программа должна принимать имена, состоящие из более чем одного слова. Кроме того, программа
* должна уменьшать значение grade на одну градацию - т.е. на одну букву выше. Предполагается, что пользователь может
* ввести A, B или C, поэтому вам не нужно беспокоиться о пропуске между D и F.
*/
#include <iostream>
#include <string>

int main() {
	const int ArSize = 20;
	using namespace std;
	cout << "What is your first name? ";
	char fName[ArSize];
	cin.getline(fName, ArSize);
	cout << "What is your last name? ";
	char lName[ArSize];
	cin.getline(lName, ArSize);
	cout << "What letter grade do you deserve? ";
	char grade;
	cin >> grade;
	grade = grade + 1;
	cout << "What is your age? ";
	int age;
	cin >> age;
	cout << "Name: " << lName << ", " << fName << "\nGrade : " << grade << "\nAge : " << age;
	return 0;
}
