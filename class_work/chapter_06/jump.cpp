// jump.cpp -- использование операторов continue и break
#include <iostream>

const int AR_SIZE = 80;

int main() {
	using namespace std;
	char line[AR_SIZE];
	int spaces = 0;
	cout << "Enter a line of text:\n";		// запрос на ввод строки текста
	cin.get(line, AR_SIZE);
	cout << "Complete line:\n" << line << endl;	// вывод полной строки
	cout << "Line through first period:\n";		// вывод строки до первой точки
	for (int i = 0; line[i] != '\0'; i++) {
		cout << line[i];			// отображение символа
		if (line[i] == '.')			// завершение, если это точка
			break;
		if (line[i] != ' ')			// пропуск отсавшейся части цикла
			continue;
		spaces++;
	}
	cout << "\n" << spaces << " spaces\n";
	cout << "Done.\n";
	return 0;
}
