// hexoct1.cpp -- показывает шестнадцеритчные и восмеричные литералы
#include <iostream>

int main() {
	using namespace std;
	int chest = 42;		// десятичный целочисленный литерал
	int waist = 0x42;	// шестнадцеритичный целочисленный литерал
	int inseam = 042;	// восмеричный целочисленный литерал
	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (42 in decimal)\n";
	cout << "waist = " << waist << " (0x42 in hex)\n";
	cout << "inseam = " << inseam << " (042 in octal)\n";
	return 0;
}
