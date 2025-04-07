// usetime0.cpp -- использование первой черновой версии класса Time
// компилировать usetime0.cpp и mytime0.cpp вместе
#include <iostream>
#include "mytime0.h"

int main() {
	using std::cout;
	using std::endl;
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;
	cout << "planning time = ";	// время на планирование
	planning.show();
	cout << endl;
	cout << "coding time = ";	// время на кодирование
	coding.show();
	cout << endl;
	cout << "fixing time = ";	// время на исправление
	fixing.show();
	cout << endl;
	total = coding.sum(fixing);
	cout << "coding.sum(fixing) = ";
	total.show();
	cout << endl;
	return 0;
}
