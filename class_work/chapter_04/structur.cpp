// structur.cpp -- простая структура
#include <iostream>

struct inflatable {	// объявление структуры
	char name[20];
	float volume;
	double price;
};

int main() {
	using namespace std;
	inflatable guest = {
		"Glorius Gloria",		// значение name
		1.88,				// значение volume
		29.99				// значение price
	};	// guest - структурная переменная типа inflatable
	// инициализаци¤ указанными значениями
	inflatable pal = {
		"Audacious Arthur",
		3.12,
		32.99
	};					// pal - вторая переменная типа inflatable
	// ПРИМЕЧАНИЕ: некоторые реализации требуют использовани¤
	// static inflatable guest =
	cout << "Expand your guest list with " << guest.name;
	cout << " and " << pal.name << "!\n";	// pal.name - член name переменной pal
	cout << "You have both for $";
	cout << guest.price + pal.price << "!\n";
	return 0;
}
