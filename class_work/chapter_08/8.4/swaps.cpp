// swaps.cpp -- обмен значениями с помощью ссылок и указателей
#include <iostream>

void swapr(int &a, int &b);	// a, b - псевдонимы для int
void swapp(int *p, int *q);	// p, q - адреса int
void swapv(int a, int b);	// a, b - новые переменные

int main() {
	using namespace std;
	int wallet1 = 300;
	int wallet2 = 350;
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;
	// использование ссылок для обмена содержимого
	cout << "Using references to swap contents:\n";
	swapr(wallet1, wallet2);	// передача переменных
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;
	// использование указателей для обмена содержимого
	cout << "Using pointers to swap contents:\n";
	swapp(&wallet1, &wallet2);	// передача адресов переменных
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;
	// попытка использования передачи по значению
	cout << "Trying to use passing by value:\n";
	swapv(wallet1, wallet2);	// передача переменных
	cout << "wallet1 = $" << wallet1;
	cout << " wallet2 = $" << wallet2 << endl;
	return 0;
}

void swapr(int &a, int &b) {	// использование ссылок
	int temp;
	temp = a;		// использование a, b для получения значения переменных
	a = b;
	b = temp;
}

void swapp(int *p, int *q) {	// использование указателей
	int temp;
	temp = *p;		// использование *p, *q для получения значения переменных
	*p = *q;
	*q = temp;
}

void swapv(int a, int b) {	// попытка использования значений
	int temp;
	temp = a;		// использование a, b для получения значения переменных
	a = b;
	b = temp;
}
