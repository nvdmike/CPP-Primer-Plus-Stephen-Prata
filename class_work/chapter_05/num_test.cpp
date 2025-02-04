// num_test.cpp -- использование числовой проверки в цикле
#include <iostream>

int main() {
	using namespace std;
	cout << "Enter the starting countdown value: ";	// ввод начального значения счётчика
	int limit;
	cin >> limit;
	int i;
	for (i = limit; i; i--)				// завершается, когда i = 0
		cout << "i = " << i << "\n";
	cout << "Done now that i = " << i << "\n";	// цикл завершён, вывод значения i
	return 0;
}
