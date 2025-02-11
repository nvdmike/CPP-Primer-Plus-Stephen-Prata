// insrt3.cpp -- чтение более одного слова с помощью get() и get()
#include <iostream>

int main() {
	using namespace std;
	const int AR_SIZE = 20;
	char name[AR_SIZE];
	char dessert[AR_SIZE];
	cout << "Enter your name:\n";			// запрос имени
	cin.get(name, AR_SIZE).get();			// читать строку и символ новой строки
	cout << "Enter your favorite dessert:\n";	// запрос любимого дессерта
	cin.get(dessert, AR_SIZE).get();
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}
