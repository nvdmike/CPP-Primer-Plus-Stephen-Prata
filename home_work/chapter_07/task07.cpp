/*
* task07.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 7: Функции как программные модули C++, Упражнения по программированию (Задача 7):
* Вернитесь к программе из листинга 7.7 и замените три функции обработки массивов версиями, которые работают с
* диапазонами значений, заданными парой указателей. Функция fill_array() вместо возврата действительного
* количества прочитанных значений должна возвращать указатель на место, следующее за последним введённым элементом;
* прочие функции должны использовать его в качестве второго аргумента для идентификации конца диапазона данных.
*/
#include <iostream>

const int MAX = 5;
// прототипы функций
double *fill_array(double *begin, double *end);
void show_array(double *begin, double *end);	// не изменять данные
void revalue(double r, double *begin, double *end);

int main() {
	using namespace std;
	double properties[MAX];
	double* end = fill_array(properties, properties + MAX);
	show_array(properties, end);
	if (end != properties) {
		cout << "Enter revaluation factor: ";				// ввод коэффициента переоценки
		double factor;
		while (!(cin >> factor)) {							// неправильный ввод
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; Please enter a number: ";	// повторный запрос на ввод числа
		}
		revalue(factor, properties, end);
		show_array(properties, end);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;
}

double* fill_array(double *begin, double *end) {
	using namespace std;
	double temp;
	int i = 1;
	double *pt;
	for (pt = begin; pt != end; ++pt) {
		cout << "Enter value #" << i << ": ";					// ввод значения
		cin >> temp;
		if (!cin) {												// неправильный ввод
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n";	// процесс ввода прекращён
			break;
		} else if (temp < 0)
			break;
		*pt = temp;
		i++;
	}
	return pt;
}
// Следующая функция может использовать, но не изменять, массив по адресу ar
void show_array(double *begin, double *end) {
	using namespace std;
	int i = 1;
	// Вывод содержимого массива ar
	for (double *pt = begin; pt != end; ++pt) {
		cout << "Property #" << i << ": $";
		cout << *pt << endl;
		i++;
	}
}
// Умножает на r каждый элемент ar[]
void revalue(double r, double *begin, double *end) {
	for (double *pt = begin; pt != end; ++pt)
		*pt *= r;
}
