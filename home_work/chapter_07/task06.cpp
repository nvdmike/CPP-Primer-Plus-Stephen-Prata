/*
* task06.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 7: Функции как программные модули C++, Упражнения по программированию (Задача 6):
* Напишите программу, использующую описанные ниже функции.
* Fill_array() принимает в качестве аргумента имя массива элементов типа double и размер этого массива. Она приглашает
* пользователя ввести значения double для помещения их в массив. Ввод прекращается при наполнении массива либо когда
* пользователь вводит нечисловое значение и возвращаает действительное количество элементов.
* Show_array() принимает в качестве аргументов имя массива значений double, а так же его размер, и отображает содержимое
* массива.
* Revers_array() принимает в качестве аргумента имя массива значений double, а так же его размер, и изменяет порядок его
* элементов на противоположный.
* Программа должна использовать эти функции для наполнения массива, обращения порядка его элементов, кроме первого и
* последнего, с последующим отображением.
*/
#include <iostream>

const int SIZE = 5;

int fillArray(double ar[], int size);
void showArray(const double *ar, int size);
void reverseArray(double ar[], int size);

int main() {
	double ar[SIZE];
	int s = fillArray(ar, SIZE);
	showArray(ar, s);
	std::cout << "\nAnd now I'll reverse this array:\n";
	reverseArray(ar, s);
	showArray(ar, s);
	return 0;
}

int fillArray(double ar[], int size) {
	int num;
	int i;
	for (i = 0; i < size; ++i) {
		std::cout << "Enter #" << i + 1 << " value: ";
		std::cin >> num;
		if (!std::cin) {
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "Error. Input process terminated.\n";
			break;
		} else if (num < 0)
			break;
		ar[i] = num;
	}
	return i;
}

void showArray(const double *ar, int size) {
	std::cout << "Values: ";
	for (int i = 0; i < size; ++i)
		std::cout << ar[i] << " ";
}

void reverseArray(double ar[], int size) {
	double temp;
	for (int i = 1; i < (size / 2); ++i) {	// двигаемся от первого элемента и только до середины массива, т.к. далее
		// перемещать местами значения уже не требуется
		temp = ar[i];						// сохраняем значение противоположного элемента во временную переменную
		ar[i] = ar[size - i - 1];			// temp, затем присваиваем ar[i] значение противоположного элемента с конца
		ar[size - i - 1] = temp;			// присваиваем противоположному элементу с конца значение ar[i], которое
		// было сохранено во временной переменной temp
	}
}