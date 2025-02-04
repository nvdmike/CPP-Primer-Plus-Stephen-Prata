// hexoct2.cpp -- отображает значения в шестнадцатиричном и восмеричном форматах
#include <iostream>

using namespace std;

int main() {
	int chest = 42;
	int waist = 42;
	int inseam = 42;
	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (42 in decimal)" << endl;
	cout << hex;	// манипулятор для изменения основания системы счисления
	cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
	cout << oct;	// манипулятор для изменения основания системы счисления
	cout << "inseam = " << inseam << " (octal for 42)" << endl;
	return 0;
}
