/*
* task01.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 6: Операторы ветвления и логические операции, Упражнения по программированию (Задача 1):
* Напишите программу, которая читает клавиатурный ввод до символа @ и повторяет его, за исключением десятичных цифр,
* преобразуя каждую букву верхнего регистра в букву нижнего регистра и наоборот. (Не забудьте о семействе функций
* cctype.)
*/
#include <iostream>
#include <cctype>

int main()
{
    std::cout << "Enter text, and type @ to terminate input: ";
    char ch = '0';
    while (std::cin.get(ch) && ch != '@') {
        if (islower(ch))
            ch = toupper(ch);
        else if (isupper(ch))
            ch = tolower(ch);
        else if (isdigit(ch)) {
            std::cin.get(ch);
            continue;
        }
        std::cout << ch;
    }
    return 0;
}