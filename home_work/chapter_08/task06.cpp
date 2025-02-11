/*
* task06.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 8: Дополнительные сведения о функциях, Упражнения по программированию (Задача 6):
* Напишите шаблонную функцию maxn(), которая принимает в качестве аргумента массив элментов типа T и целое число,
* представляющее количество элементов в массиве, а возвращает элемент с наибольшим значением. Протестируйте её работу в
* программе, которая использует этот шаблон с массивом из шести значений int и массивом из четырёх значений double.
* Программа так же должна включать специализацию, которая использует массив указателей на char в качестве первого
* аргумента и количество указателей - в качестве второго, а затем возвращает адрес самой длинной строки. Если имеется
* более одной строки наибольшей длины, функция должна вернуть адрес первой из них. Протестируйте специализацию на
* массиве из пяти указателей на строки.
*/
#include <iostream>
#include <cstring>

template <typename T>
T maxn(T *arr, int n);
template <>
const char *maxn<const char *>(const char *arr[], int n);

int main() {
	int arr1[6] = { 99, 354, 22, 45, 77, 402 };
	double arr2[4] = { 9.1, 176.2, 14.3, 93.1 };
	const char *arr3[5] = {
		"Cool as a cucumber",
		"When pigs fly",
		"To butter up",
		"Piece of cake",
		"To kick the bucket"
	};
	std::cout << "Max element of the int array is: " << maxn(arr1, 6) << std::endl;
	std::cout << "Max element of the double array is: " << maxn(arr2, 4) << std::endl;
	std::cout << "Max element of the string array is: " << maxn(arr3, 5) << std::endl;
	return 0;
}

template <typename T>
T maxn(T *arr, int n) {
	T temp = arr[0];
	for (int i = 1; i < n; ++i)
		if (arr[i] > temp)
			temp = arr[i];
	return temp;
}

template <>
const char *maxn<const char *>(const char *arr[], int n) {
    const char *pt = arr[0];
    for (int i = 1; i < n; ++i)
        if (strlen(arr[i]) > strlen(pt))
            pt = arr[i];
    return pt;
}
