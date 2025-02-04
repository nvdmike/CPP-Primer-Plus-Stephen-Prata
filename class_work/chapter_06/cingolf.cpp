// cingolf.cpp -- нечисловой ввод пропускается
#include <iostream>

const int MAX = 5;

int main() {
	using namespace std;
	// получение данных
	int golf[MAX];
	cout << "Please enter your golf scores.\n";
	cout << "You mast enter " << MAX << " rounds.\n";	// ввод результатов в гольфе
	int i;
	for (i = 0; i < MAX; i++) {
		cout << "round #" << i + 1 << ": ";
		while (!(cin >> golf[i])) {
			cin.clear();				// сброс ввода
			while (cin.get() != '\n')
				continue;			// отбрасывание некорректного ввода
			cout << "Please enter a number: ";
		}
	}
	// вычисление среднего
	double total = 0.0;
	for (i = 0; i < MAX; i++)
		total += golf[i];
	// вывод результатов
	cout << total / MAX << " = average score "
	     << MAX << " rounds\n";
	return 0;
}
