/*
* task09.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 6: Операторы ветвления и логические операции, Упражнения по программированию (Задача 9):
* Выполните упражнение 6, но измените его так, чтобы данные можно было получать из файла. Первым элементом файла должно
* быть количество меценатов, а остальная часть состоять из пар строк, в которых первая строка содержит имя, а вторая -
* сумму пожертвования. То есть файл должен выглядеть примерно так:
* 4
* Sam Stone
* 2000
* Freida Flass
* 100500
* Tammy Tubbs
* 5000
* Rich Raptor
* 55000
*/
#include <iostream>
#include <string>
#include <fstream>

struct ipps {
    std::string patronName;	// имя мецената
    double donationAmount;	// сумма пожертвования
};

int main() {
    int num, grandPatrons = 0, patrons = 0;
    std::string fileName;
    std::cout << "Enter name of data file: ";
    std::cin >> fileName;
    std::ifstream file;
    file.open(fileName);
    if (!file.is_open()) {
        std::cout << "Could not open the file \"" << fileName << "\"" << std::endl;
        std::cout << "Progran terminating.\n";
        exit(EXIT_FAILURE);
    }
    (file >> num).get();
    ipps* ippsArr = new ipps[num];
    for (int i = 0; i < num, file.good(); ++i) {
        getline(file, ippsArr[i].patronName);
        (file >> ippsArr[i].donationAmount).get();
        if (ippsArr[i].donationAmount >= 10000)
            grandPatrons++;    // подсчёт тех, кто пожертвовал больше 10000
        else
            patrons++;         // подсчёт тех, кто пожертвовал меньше 10000
    }
    file.close();
    if (grandPatrons > 0) {    // вывести отдельным списком тех, кто пожертвовал больше 10000
        std::cout << "\nGrand Patrons:" << std::endl;
        for (int i = 0; i < num; ++i)
            if (ippsArr[i].donationAmount >= 10000)
                std::cout << "Patron name: " << ippsArr[i].patronName << ", donation amount: " << ippsArr[i].donationAmount << std::endl;
    } else {
        std::cout << "\nGrand Patrons:" << std::endl;
        std::cout << "none" << std::endl;
    }
    if (patrons > 0) {        // вывести отдельным списком тех, кто пожертвовал менее 10000
        std::cout << "\nPatrons:" << std::endl;
        for (int i = 0; i < num; ++i)
            if (ippsArr[i].donationAmount < 10000)
                std::cout << "Patron name: " << ippsArr[i].patronName << ", donation amount: " << ippsArr[i].donationAmount << std::endl;
    } else {
        std::cout << "\nPatrons:" << std::endl;
        std::cout << "none" << std::endl;
    }
    delete[] ippsArr;
    return 0;
}
