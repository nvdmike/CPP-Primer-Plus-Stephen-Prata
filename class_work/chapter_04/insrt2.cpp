// insrt2.cpp -- чтение более одного слова с помощью getline
#include <iostream>

int main() {
	using namespace std;
	const int AR_SIZE = 20;
	char name[AR_SIZE];
	char dessert[AR_SIZE];
	cout << "Enter your name:\n";			// запрос имени
	cin.getline(name, AR_SIZE);			// читать до символа новой строки
	cout << "Enter your favorite dessert:\n";	// запрос любимого дессерта
	cin.getline(dessert, AR_SIZE);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}
