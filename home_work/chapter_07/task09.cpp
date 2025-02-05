/*
* task09.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 7: Функции как программные модули C++, Упражнения по программированию (Задача 9):
* Следующее упражнение позволит попрактиковаться в написании функций, работающих с массивами и структурами. Ниже
* представлен каркас программы. Дополните его функциями, описанными в комментариях.
*/
#include <iostream>
#include <cstring>

const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
// getinfo() принимает два аргумента: указатель на первый элемент массива структур student и значение int,
// представляющее количество элементов в массиве. Функция запрашивает и сохраняет данные о студентах. Ввод прекращается
// либо после наполнения массива, либо при вводе пустой строки в качестве имени студента. Функция возвращает
// действительное количество введённых элементов.
int getinfo(student pa[], int n);
// display1() принимает в качестве аргумента структуру student и отображает её содержимое.
void display1(student st);
// display2() принимает адрес структуры student в качестве аргумента и отображает её содержимое.
void display2(const student *ps);
// display3() принимает указатель на первый элемент массива структур student и количество элментов в этом массиве и
// отображает содержимое всех структур в массиве.
void display3(const student pa[], int n);

int main() {
	std::cout << "Enter class size: ";
	int class_size;
	std::cin >> class_size;
	while (std::cin.get() != '\n')
		continue;
	student* ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; ++i) {
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete[] ptr_stu;
	std::cout << "Done\n";
	return 0;
}

int getinfo(student pa[], int n) {
	int count = 0;
	for (int i = 0; i < n; ++i) {
		std::cout << "Student #" << i + 1 << std::endl;
		std::cout << "Enter student name: ";
		std::cin.getline(pa[i].fullname, SLEN);
		if (strlen(pa[i].fullname) != 0) {
			std::cout << "Enter hobby: ";
			std::cin.getline(pa[i].hobby, SLEN);
			std::cout << "Enter ooplevel: ";
			std::cin >> pa[i].ooplevel;
			std::cin.get();
			count++;
		} else
			break;
	}
	std::cout << std::endl;
	return count;
}

void display1(student st) {
	std::cout << "Name: " << st.fullname << std::endl;
	std::cout << "Hobby: " << st.hobby << std::endl;
	std::cout << "OOP Level: " << st.ooplevel << std::endl;
}

void display2(const student *ps) {
	std::cout << "Name: " << ps->fullname << std::endl;
	std::cout << "Hobby: " << ps->hobby << std::endl;
	std::cout << "OOP Level: " << ps->ooplevel << std::endl;
}

void display3(const student pa[], int n) {
	for (int i = 0; i < n; ++i) {
		std::cout << "Name: " << pa[i].fullname << std::endl;
		std::cout << "Hobby: " << pa[i].hobby << std::endl;
		std::cout << "OOP Level: " << pa[i].ooplevel << std::endl;
	}
}
