/*
* task05.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 8: Дополнительные сведения о функциях, Упражнения по программированию (Задача 5):
* Напишите шаблонную функцию max5(), которая принимает в качестве аргумента массив из пяти элементов типа T и возвращает
* наибольший элемент в массиве. (Поскольку размер массива фиксирован, его можно жёстко закодировать в цикле, а не
* передавать в виде аргумента.) Протестируйте функцию в программе с использованием массива из пяти значений int и пяти
* значений double.
*/
#include <iostream>

const int SIZE = 5;

template <typename T>
T max5(T *arr);

int main() {
	int arr1[SIZE] = { 99, 354, 22, 45, 77 };
	double arr2[SIZE] = { 9.1, 76.2, 14.3, 93.1, 201.8 };
	std::cout << "Max element of the int array is: " << max5(arr1) << std::endl;
	std::cout << "Max element of the double array is: " << max5(arr2) << std::endl;
	return 0;
}

template <typename T>
T max5(T *arr) {
	T temp = arr[0];
	for (int i = 1; i < SIZE; ++i)
		if (arr[i] > temp)
			temp = arr[i];
	return temp;
}
