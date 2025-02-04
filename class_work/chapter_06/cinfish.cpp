// cinfish.cpp -- нечисловой ввод прекращает выполнение цикла
#include <iostream>

const int MAX = 5;

int main() {
	using namespace std;
	// получение данных
	double fish[MAX];
	cout << "Please enter the weights of your fish.\n";
	cout << "You may enter up to " << MAX
	     << " fish <q to terminate>.\n";	// ввод пойманных рыб
	cout << "fish #1: ";
	int i = 0;
	while (i < MAX && cin >> fish[i]) {
		if (++i < MAX)
			cout << "fish #" << i + 1 << ": ";
	}
	// вычисление среднего значения
	double total = 0.0;
	for (int j = 0; j < i; ++j)
		total += fish[j];
	// вывод результатов
	if (i == 0)
		cout << "No fish\n";		// рыбы нет
	else
		cout << total / i << " = average weight of "
		     << i << " fish\n";		// средний вес рыбы
	cout << "Done.\n";
	return 0;
}
