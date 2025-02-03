// strgback.cpp -- функци, возвращающаяя указатель на char
#include <iostream>

char * buildstr(char c, int n);	// прототип

int main() {
	using namespace std;
	int times;
	char ch;
	cout << "Enter a character: ";	// ввод символа
	cin >> ch;
	cout << "Enter an integer: ";	// ввод целого числа
	cin >> times;
	char* ps = buildstr(ch, times);
	cout << ps << endl;
	delete[] ps;			// освобождение памяти
	ps = buildstr('+', 20);		// повторное использование указателя
	cout << ps << "-DONE-" << ps << endl;
	return 0;
}
// Строит строку из n символов ch
char * buildstr(char c, int n) {
	char * pstr = new char[n + 1];
	pstr[n] = '\0';
	while(n-- > 0)
		pstr[n] = c;
	return pstr;
}
