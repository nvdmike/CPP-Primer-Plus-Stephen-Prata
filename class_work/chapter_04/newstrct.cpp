// newstrct.cpp -- использование new со структурой
#include <iostream>

struct inflatable {	// определение структуры
	char name[20];
	float volume;
	double price;
};

int main() {
	using namespace std;
	inflatable *ps = new inflatable;			// выделение памяти для структуры
	cout << "Enter name of inflatable item: ";		// ввод имени элемента inflatable
	cin.get(ps->name, 20);					// первый метод для доступа к членам
	cout << "Enter volume in cubic feet: ";			// ввод объёма в кубических футах
	cin >> (*ps).volume;					// второй метод для доступа к членам
	cout << "Enter price: $";				// ввод цены
	cin >> ps->price;
	cout << "Name: " << (*ps).name << endl;			// второй метод
	cout << "Volume: " << ps->volume << " cubic feet\n";	// первый метод
	cout << "Price: $" << ps->price << endl;		// первый метод
	delete ps;
	return 0;
}
