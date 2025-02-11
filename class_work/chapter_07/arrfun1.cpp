// arrfun1.cpp -- функция с аргументом-массивом
#include <iostream>

const int AR_SIZE = 8;

int sum_arr(int arr[], int n);	// прототип

int main() {
	using namespace std;
	int cookies[AR_SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
	// Некоторые системы требудт предварить int словом static,
	// чтобы разрешить инициализацию масива
	int sum = sum_arr(cookies, AR_SIZE);
	cout << "Total cookies eaten: " << sum << "\n";	// вывод количества съеденного печенья
	return 0;
}

// Возвращает сумму элементов массива целых чисел
int sum_arr(int arr[], int n) {
	int total = 0;
	for (int i = 0; i < n; i++)
		total = total + arr[i];
	return total;
}
