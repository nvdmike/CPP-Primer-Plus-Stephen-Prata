// ifelse.cpp -- использование оператора if else
#include <iostream>

int main() {
	char ch;
	std::cout << "Type, and I shall repeat.\n";	// запрос на ввод строки
	std::cin.get(ch);
	while (ch != '.') {
		if (ch == '\n')
			std::cout << ch;		// выполнение в случае символа новой строки
		else
			std::cout << ++ch;		// выполнение в противном случае
		std::cin.get(ch);
	}
	// попробуйте ch + 1 вместо ++chm чтобы увидеть интересный эффект
	std::cout << "\nPlease excuse the slight confusion.\n";
	return 0;
}
