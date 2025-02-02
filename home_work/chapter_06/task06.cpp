/*
* task06.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 6: Операторы ветвления и логические операции, Упражнения по программированию (Задача 6):
* Постройте программу, которая отслеживает пожертвования в Общество Защиты Влиятельных Лиц. Она должна запрашивать у
* пользователя количество меценатов, а затем приглашать вводить их имена и суммы пожертвований от каждого. Информация
* должна сохраняться в динамически выделяемом массиве структур. Каждая структура должна иметь два члена: символьный
* массив (или объект string) для хранения имени и переменную-член типа double - для хранения суммы пожертвования. После
* чтения всех данных программа должна отображать имена и суммы пожертвований тех, кто не пожалел $10 000 и более. Этот
* список должен быть озаглавлен меткой "Grand Patrons". После этого программа должна выдать список остальных
* жертвователей. Он должен быть озаглавлен "Patrons". Если в одной из двух категорий не окажется никого, программа
* должна напечатать "none". Помимо отображения двух категорий, никакой другой сортировки делать не нужно.
*/
#include <iostream>

struct ipps {
	std::string patronName;	// имя мецената
	double donationAmount;	// сумма пожертвования
};

int main() {
	std::cout << "Enter the number of patrons: ";
	int num, grandPatrons = 0, patrons = 0;
	std::cin >> num;		// количество меценатов
	ipps* ippsArr = new ipps[num];
	for (int i = 0; i < num; i++) {
		std::cout << "Enter #" << i + 1 << " patron name: ";
		std::cin >> ippsArr[i].patronName;
		std::cout << "Enter sum of donation: ";
		std::cin >> ippsArr[i].donationAmount;
		if (ippsArr[i].donationAmount >= 10000)
			grandPatrons++;	// подсчёт тех, кто пожертвовал больше 10000
		else
			patrons++;	// подсчёт тех, кто пожертвовал меньше 10000
	}
	if (grandPatrons > 0) {		// вывести отдельным списком тех, кто пожертвовал больше 10000
		std::cout << "\nGrand Patrons:" << std::endl;
		for (int i = 0; i < num; ++i)
			if (ippsArr[i].donationAmount >= 10000)
				std::cout << ippsArr[i].patronName << std::endl;
	} else {
		std::cout << "\nGrand Patrons:" << std::endl;
		std::cout << "none" << std::endl;
	}
	if (patrons > 0) {		// вывести отдельным списком тех, кто пожертвовал менее 10000
		std::cout << "\nPatrons:" << std::endl;
		for (int i = 0; i < num; ++i)
			if (ippsArr[i].donationAmount < 10000)
				std::cout << ippsArr[i].patronName << std::endl;
	} else {
		std::cout << "\nPatrons:" << std::endl;
		std::cout << "none" << std::endl;
	}
	delete[] ippsArr;
	return 0;
}
