// cctypes.cpp -- использование библиотеки ctype.h
#include <iostream>
#include <cctype>	// прототипы символьных функций

int main() {
	using namespace std;
	cout << "Enmter text for analysis, and type @"
	     << " to terminate input.\n";	// запрос текста для анализа; завершающий символ - @
	char ch;
	int whitespace = 0;
	int digits = 0;
	int chars = 0;
	int punct = 0;
	int others = 0;
	cin.get(ch);				// получение первого символа
	while (ch != '@') {			// проверка на признак окончания ввода

		if (isalpha(ch))		// буквенный символ?
			chars++;
		else if (isspace(ch))		// пробельный символ?
			whitespace++;
		else if (isdigit(ch))		// десятичная цифра?
			digits++;
		else if (ispunct(ch))		// знак препинания?
			punct++;
		else
			others++;
		cin.get(ch);			// получение следующего символа
	}
	cout << chars << " letters, "
	     << whitespace << " whitespace, "
	     << digits << " digits, "
	     << punct << " punctuations, "
	     << others << " others.\n";		// вывод количества букв, пробелов, цифр,
						// знаков препинания и прочих символов
	return 0;
}
