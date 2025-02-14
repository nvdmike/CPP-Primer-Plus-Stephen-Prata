// exceed.cpp -- выход за пределы для некоторых целочисленных типов
#include <iostream>
#define ZERO 0		// создает символ ZERO для значения 0
#include <climits>	// определяет INT_MAX как наибольшее значение int

int main() {
	using namespace std;
	short sam = SHRT_MAX;		// инициализирует переменную максимальным значением
	unsigned short sue = sam;	// нормально, поскольку переменная sam уже определена
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl
	     << "Add $1 to each account." << endl << "Now ";
	sam = sam + 1;
	sue = sue + 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited.\nPoor Sam!" << endl;
	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << "Take $1 from each account." << endl << "Now ";
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
	return 0;
}
