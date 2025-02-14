// address.cpp -- использование операции & для нахождения адреса
#include <iostream>

int main() {
	using namespace std;
	int donuts = 6;
	double cups = 4.5;
	cout << "donuts value = " << donuts;
	cout << " and donuts address = " << &donuts << endl;
	// ПРИМЕЧАНИЕ: может понадобиться использовать
	// unsigned (&donuts) и unsigned (&cups)
	cout << "cups value = " << cups;
	cout << " and cups address = " << &cups << endl;
	return 0;
}
