// addpntrs.cpp -- сложение указателей
#include <iostream>

int main() {
	using namespace std;
	double wages[3] = { 10000.0, 20000.0, 30000.0 };
	short stacks[3] = { 3, 2, 1 };
	// Два способа получить адрес массива
	double *pw = wages;					// имя массива равно адресу
	short *ps = &stacks[0];					// либо использование операции взятия адреса
								// с элементом массива
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "add 1 to the pw pointer:\n";			// добавление 1 к указателю pw
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;
	cout << "add 1 to the ps pointer:\n";			// добавление 1 к указателю ps
	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";
	// Доступ к двум элементам с помощью нотации массивов
	cout << "access two elements with array notation\n";
	cout << "stacks[0] = " << stacks[0]
	     << ", stacks[1] = " << stacks[1] << endl;
	// Доступ к двум элементам с помощью нотации указателей
	cout << "access two elements with pointer notation\n";
	cout << "*stacks = " << *stacks
	     << ", *(stacks + 1) = " << *(stacks + 1) << endl;
	cout << sizeof(wages) << " = size of wages array\n";	// размер массива wages
	cout << sizeof(pw) << " = size of pw pointer\n";	// размер указателя pw
	return 0;
}
