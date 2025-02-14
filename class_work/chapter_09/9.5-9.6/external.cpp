// external.cpp -- внешние переменные
// компилировать вместе с support.cpp
#include <iostream>

using namespace std;
// внешн¤¤ переменна¤
double warming = 0.3;	// переменна¤ warming определена
// прототипы функций
void update(double dt);
void local();

int main() {		// использует глобальную переменную
	cout << "Global warming is " << warming << " degrees.\n";
	update(0.1);	// вызов функции, измен¤ющей warming
	cout << "Global warming is " << warming << " degrees.\n";
	local();	// вызов функции с локальной переменной warming
	cout << "Global warming is " << warming << " degrees.\n";
	return 0;
}
