/*
* task04.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 6: Операторы ветвления и логические операции, Упражнения по программированию (Задача 4):
* Когда вы вступите в Благотворительный Орден Программистов (БОП), к вам могут обращаться на заседаниях БОП по вашему
* реальному имени, по должности либо секретному имени БОП. Напишите программу, которая может выводить списки членов по
* реальным именам, должностям, секретным именам, либо по предпочтению самого члена. В основу положите следующую
* структуру:
* // Структура имён Благотворительного Ордена Программистов (БОП)
* struct bop {
*     std::string realName;   // реальное имя
*     std::string title;      // должность
*     std::string bopName;    // секретное имя БОП
*     int preference;         // 0 = полное имя, 1 = титул, 2 = имя БОП
* };
* В этой программе создайте небольшой массив таких структур и инициализируйте его соотвествующими значениями. Пусть
* программа запустит цикл, который даст возможность пользователю выбирать разные альтернативы:
* a. display by name	b. display by title
* c. display by bopname	d. display by preference
* q. quit
* Обратите внимание, что "display by preference" (отображать по предпочтениям) не означает, что нужно отобразить член
* preference; это значит, что необходимо отобразить член структуры, который соотвествует значению preference. Например,
* если preference равно 1, то выбор d должен вызвать отображение должности данного программиста. Пример запуска этой
* программы может выглядеть следующим образом:
* Benevolent Order of Programmers Report
* a. display by name	b. display by title
* c. display by bopname	d. display by preference
* q. quit
* Enter your choice: a
* Wimp Macho
* Raki Rhodes
* Celia Laiter
* Hoppy Hipman
* Pat Hand
* Next choice: d
* Wimp Macho
* Junior programmer
* MIPS
* Analyst Trainee
* LOOPY
* Next choice: q
* Bye!
*/
#include <iostream>
#include <string>

const int SIZE = 5;
struct bop {
    std::string realName;   // реальное имя
    std::string title;      // должность
    std::string bopName;    // секретное имя БОП
    int preference;         // 0 = полное имя, 1 = титул, 2 = имя БОП
};

void showMenu();

int main() {
    std::cout << "Benevolent Order of Programmers Report\n";
    showMenu();                                                // отображение меню
    bop bopArr[SIZE] = {
        { "Wimp Macho", "Senior programmer", "Macho man" },
        { "Raki Rhodes", "Junior programmer", "Senior" },
        { "Celia Laiter", "Middle programmer", "MIPS" },
        { "Hoppy Hipman", "Analyst Trainee", "Rookie" },
        { "Pat Hand", "Junior programmer", "LOOPY" }
    };
    std::cout << "\nEnter your choice: ";
    char choice = ' ';
    std::cin >> choice;
    while (choice != 'q' && choice != 'Q') {
        switch (choice) {
            case 'a':
            case 'A':
                for (int i = 0; i < SIZE; ++i)
                    std::cout << bopArr[i].realName << std::endl;
                break;
            case 'b':
            case 'B':
                for (int i = 0; i < SIZE; ++i)
                    std::cout << bopArr[i].title << std::endl;
                break;
            case 'c':
            case 'C':
                for (int i = 0; i < SIZE; ++i)
                    std::cout << bopArr[i].bopName << std::endl;
                break;
            case 'd':
            case 'D': {
                std::cout << "\nEnter your preference:\n"
                    << "0 - real name\n"
                    << "1 - title\n"
                    << "2 - bop name\n";
                int errors = 0;                                   // счётчик ошибок
                for (int i = 0; i < SIZE; ++i) {
                    std::cout << "\nPlease, set your preference for " << i + 1 << " memeber of BOP: ";
                    if (!(std::cin >> bopArr[i].preference)) {    // если при заполнении вводятся некорректные значения, увеличить счётчик ошибок и прекратить заполнение
                        errors++;
                        break;
                    }
                }
                if (errors == 0) {                                // если ошибок в заполнении нет, отобразить массив стркутур, в соответствии с предпочтениями
                    for (int i = 0; i < SIZE; ++i) {
                        switch (bopArr[i].preference) {
                        case 0:
                            std::cout << bopArr[i].realName << std::endl;
                            break;
                        case 1:
                            std::cout << bopArr[i].title << std::endl;
                            break;
                        case 2:
                            std::cout << bopArr[i].bopName << std::endl;
                            break;
                        }
                    }
                } else {                                         // если есть ошибки, вывести сообщение
                    std::cout << "\nIt is not possible choice. Please try again.\n";
                    break;
                }
                break;
            }
            default: std::cout << "\nThis is not possible choice. Please, try again.\n";
        }
        std::cin.clear();                                        // очистка ввода
        std::cout << "\nNext choice: ";
        std::cin >> choice;
    }
    std::cout << "\nBye!\n";
    return 0;
}

void showMenu() {
    std::cout << "a. display by name\tb. display by title\n"
        << "c. display by bopname\td. display by preference\n"
        << "q. quit\n";
}
