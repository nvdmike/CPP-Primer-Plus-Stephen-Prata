// arrobj.cpp -- функции с объектами array (C++11)
#include <iostream>
#include <array>
#include <string>
// константные данные
const int SEASONS = 4;
const std::array<std::string, SEASONS> SNAMES = { "Spring", "Summer", "Fall", "Winter" };
// функци¤ дл¤ изменени¤ объекта array
void fill(std::array<double, SEASONS> *pa);
// функци¤, использующа¤ объект array, но не измен¤юща¤ его
void show(std::array<double, SEASONS> da);

int main() {
	std::array<double, SEASONS> expenses;
	fill(&expenses);
	show(expenses);
	return 0;
}

void fill(std::array<double, SEASONS>* pa) {
	using namespace std;
	for (int i = 0; i < SEASONS; ++i) {
		cout << "Enter " << SNAMES[i] << " expenses: ";	// ввод расходов по временам года
		cin >> (*pa)[i];
	}
}

void show(std::array<double, SEASONS> da) {
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";				// вывод расходов по временам года
	for (int i = 0; i < SEASONS; ++i) {
		cout << SNAMES[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total Expenses: $" << total << endl;	// вывод общей суммы расходов
}
