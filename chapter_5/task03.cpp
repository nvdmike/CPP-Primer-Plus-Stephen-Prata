/*
* task03.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 5: Циклы и выражения отношений, Упражнения по программированию (Задача 3):
* Напишите программу, которая приглашает пользователя вводить числа. После каждого введённого значения программа должна
* выдавать накопленную сумму введённых значений. Программа должна завершаться при вводе 0.
*/
#include <iostream>

int main() {
	using namespace std;
	int a, sum;
	cout << "Enter numbers; enter 0 to quit.\n";
	cout << "Enter the number: ";
	cin >> a;
	sum = 0;
	while (a != 0) {
		sum += a;
		cout << "Sum: " << sum << endl;
		cout << "Enter the new number: ";
		cin >> a;
	}
	cout << endl << "Final sum: " << sum << endl;
	return 0;
}
