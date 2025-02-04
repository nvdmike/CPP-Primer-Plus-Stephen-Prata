// pointer.cpp -- наша первая переменная-указатель
#include <iostream>

int main() {
	using namespace std;
	int updates = 6;	// объ¤вление переменной
	int * p_updates;	// объ¤вление указател¤ на int
	p_updates = &updates;	// присвоить адрес int указателю
	// выразить значени¤ двумя способами
	cout << "Values: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;
	// выразить адреса двум¤ способами
	cout << "Addresses: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;
	// изменить значение через указатель
	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;
	return 0;
}
