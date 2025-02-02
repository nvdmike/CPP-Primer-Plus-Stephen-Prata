/*
* task01.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 5: Циклы и выражения отношений, Упражнения по программированию (Задача 1):
* Напишите программу, запрашивающую у пользователя ввод двух целых чисел. Затем программа должна вычислить и выдать
* сумму всех целых чисел, лежащих между этими двумя целыми. Предполагается, что меньшее значение вводится первым.
* Например, если пользователь ввёл 2 и 9, программа должна сообщить, что сумма всех целых чисел от 2 до 9 равна 44.
*/
#include <iostream>

int main() {
	using namespace std;
	int a, b, sum;
	cout << "Enter the two numbers. Secons number must be bigger than first.\n";
	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;
	sum = 0;
	for (int i = a; i <= b; i++)
		sum += i;
	cout << "Sum of all numbers = " << sum << endl;
	return 0;
}
