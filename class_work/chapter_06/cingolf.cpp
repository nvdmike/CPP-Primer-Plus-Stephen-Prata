// cingolf.cpp -- нечисловой ввод пропускается
#include <iostream>
const int Max = 5;
int main() {
	using namespace std;
	// получение данных
	int golf[Max];
	cout << "Please enter your golf scores.\n";
	cout << "You mast enter " << Max << " rounds.\n";	// ввод результатов в гольфе
	int i;
	for (i = 0; i < Max; i++) {
		cout << "round #" << i + 1 << ": ";
		while (!(cin >> golf[i])) {
			cin.clear();	// сброс ввода
			while (cin.get() != '\n')
				continue;	// отбрасывание некорректного ввода
			cout << "Please enter a number: ";
		}
	}
	
	// вычисление среднего
	double total = 0.0;
	for (i = 0; i < Max; i++)
		total += golf[i];

	// вывод результатов
	cout << total / Max << " = average score "
		 << Max << " rounds\n";
	return 0;
}