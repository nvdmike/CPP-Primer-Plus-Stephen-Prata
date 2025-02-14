/*
* task03.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 8: Дополнительные сведения о функциях, Упражнения по программированию (Задача 3):
* Напишите функцию, которая принмиает ссылку на оъект string в качестве параметра и преобразует содержимое string в
* символы верхнего регистра. Используйте функцию toupper(), описанную в табл 6.4 (см.главу 6). Напишите программу,
* использующую цикл, которая позволяет проверить работу функции для разного ввода. Пример ввода может выглядеть
* следующим образом:
* Enter a string (q to quit): go away
* GO AWAY
* Next string (q to quit): good grief!
* GOOD GRIEF!
* Next string (q to quit): q
* Bye.
*/
#include <iostream>
#include <string>
#include <cctype>

void upperCase(std::string &str);

int main() {
	std::cout << "Enter a string (q to quit): ";
	std::string str;
	getline(std::cin, str);
	while (str != "q" && str != "Q") {
        	std::cin.clear();
		upperCase(str);
		std::cout << "\nNext string (q to quit): ";
		getline(std::cin, str);
	}
	std::cout << "Bye.\n";
	return 0;
}

void upperCase(std::string &str) {
	for (int i = 0; i < str.length(); ++i)
		str[i] = toupper(str[i]);
	std::cout << str;
}
