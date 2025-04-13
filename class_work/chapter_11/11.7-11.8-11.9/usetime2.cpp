// usetime2.cpp -- использование третьей черновой версии класса Time
// компилировать usetime2.cpp и mytime2.cpp вместе
#include <iostream>
#include "mytime2.h"

int main() {
	using std::cout;
	using std::endl;
	Time weeding(4, 35);
	Time waxing(2, 47);
	Time total;
	Time diff;
	Time adjusted;
	cout << "weeding time = ";	// время на подготовку
	weeding.show();
	cout << endl;
	cout << "waxing time = ";	// полезное время
	waxing.show();
	cout << endl;
	cout << "total work time = ";	// общее рабочее время
	total = weeding + waxing;	// используется operator+()
	total.show();
	cout << endl;
	diff = weeding - waxing;	// используется operator-()
	cout << "weeding time - waxing time = ";
	diff.show();
	cout << endl;
	adjusted = total * 1.5;		// используется operator*()
	cout << "adjusted work time = ";
	adjusted.show();
	cout << endl;
	return 0;
}
