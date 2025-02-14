// twofile1.cpp -- переменный с внешним и внутренним связываением
#include <iostream>	// должен компилироваться с twofile2.cpp

int tom = 3;		// определение внешней переменной
int dick = 30;		// определение внешней переменной
static int harry = 300;	// статическая, внутреннее связывание
// прототип функции
void remoteAccess();

int main() {
	using namespace std;
	cout << "main() reports the following addresses:\n";	// вывод адресов
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
	remoteAccess();
	return 0;
}
