// twofile2.cpp -- переменный с внешним и внутренним связываением
#include <iostream>	// должен компилироваться с twofile1.cpp

extern int tom;		// переменная tom определена в другом месте
static int dick = 10;	// переопределяет внешнюю переменную dick
int harry = 200;	// определение внешней переменной,
			// конфликт с harry из twofile1 отсутствует
void remoteAccess() {
	using namespace std;
	cout << "remoteAccess() reports the following addresses:\n";	// вывод адресов
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
}
