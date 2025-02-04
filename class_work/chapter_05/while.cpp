// while.cpp -- представление цикла while
#include <iostream>

const int AR_SIZE = 20;

int main() {
	using namespace std;
	char name[AR_SIZE];
	cout << "Your first name please: ";	// ввод имени
	cin >> name;
	// Вывод имени посимвольно и в кодах ASCII
	cout << "There is your name, verticalized and ASCIIzed:\n";
	int i = 0;				// начать с начала строки
	while (name[i] != '\0')	{		// обрабатывать до конца строки. Можно написать: while (name[i])
		cout << name[i] << ": " << int(name[i]) << endl;
		i++;				// не забудьте этот шаг
	}
	return 0;
}
