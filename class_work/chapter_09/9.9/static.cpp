// static.cpp -- использование статической локальной переменной
#include <iostream>
// константы
const int AR_SIZE = 10;
// прототип функции
void strcount(const char *str);

int main() {
	using namespace std;
	char input[AR_SIZE];
	char next;
	cout << "Enter a line:\n";
	cin.get(input, AR_SIZE);
	while (cin) {
		cin.get(next);
		while (next != '\n')	// строка не помещается;
			cin.get(next);		// избавиться от остатка
		strcount(input);
		cout << "Enter bext line (empty line to quit):\n";
		cin.get(input, AR_SIZE);
	}
	cout << "Bye\n";
	return 0;
}

void strcount(const char *str) {
	using namespace std;
	static int total = 0;	// статическая локальная переменная
	int count = 0;			// автоматическая локальная переменная
	cout << "\"" << str << "\"contains ";
	while (*str++)			// переход к концу строки
		count++;
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}