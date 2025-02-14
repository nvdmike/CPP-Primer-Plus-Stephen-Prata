// arfupt.cpp -- массив указателей на функции
#include <iostream>
// различные нотации, одни и те же сигнатуры
const double * f1(const double ar[], int n);
const double * f2(const double [], int n);
const double * f3(const double *, int n);

int main() {
	using namespace std;
	double av[3] = { 1112.3, 1542.6, 2227.9 };
	// указатель на функцию
	const double *(*p1)(const double *, int) = f1;
	auto p2 = f2;				// автоматическое выведение типа C++11
	// до C++11 можно было использовать следующий код
	// const double *(*p2)(const double *, int) = f2;
	// использование указателей на функцию
	cout << "Using pointers to functions:\n";
	cout << "Address value\n";	// вывод значения адреса
	cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
	cout << p2(av, 3) << ": " << *p2(av, 3) << endl;
	// pa - массив указателей
	// auto не работает со списковой инициализацией
	const double *(*pa[3])(const double ar[], int n) = { f1, f2, f3 };
	// но работает с инициализацией единственным значением
	// pb - указатель на первый элемент pa
	auto pb = pa;
	// до С++11 можно использовать следующий код
	// const double *(**pb)(const double *, int) = pa;
	// использование массивов указателей на функции
	cout << "\nUsing an array of pointers to functions:\n";
	cout << "Address Value\n";	// вывод значения адреса
	for (int i = 0; i < 3; ++i)
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;
	// использование указателя на указатель на функцию
	cout << "\nUsing pointer to a pointer to a function:\n";
	cout << "Address Value\n";	// вывод значения адреса
	for (int i = 0; i < 3; ++i)
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;
	// указатель на массив указаталей на функции
	cout << "\nUsing pointer to an array of pointers:\n";
	cout << "Address Value\n";	// вывод значения адреса
	// простой способ объявления pc
	auto pc = &pa;
	// до С++11 можно использовать следующий код
	// const double *(*(*pc)[3])(const double *, int) = &pa;
	cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << endl;
	// сложный способ объявления pd
	const double *(*(*pd)[3])(const double*, int) = &pa;
	// сохранение возвращённого значения в pdb
	const double *pdb = (*pd)[1](av, 3);
	cout << pdb << ": " << *pdb << endl;
	// альтернативная нотация
	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;
	// cin.get();
	return 0;
}
// простейшие функции
const double* f1(const double * ar, int n) {
	return ar;
}

const double* f2(const double ar[], int n) {
	return ar+1;
}

const double* f3(const double ar[], int n) {
	return ar+2;
}
