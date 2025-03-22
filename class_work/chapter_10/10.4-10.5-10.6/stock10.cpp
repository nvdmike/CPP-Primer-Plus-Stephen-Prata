// stock10.cpp -- реализация класса Stock с добавленными конструкторами и деструктором
#include <iostream>
#include "stock10.h"
// конструкторы (версии с выводом сообщений)
Stock::Stock() {	// конструктор по умолчанию
	std::cout << "Default constructor called\n";
	company = "no name";
	shares = 0;
	shareVal = 0.0;
	totalVal = 0.0;
}

Stock::Stock(const std::string &co, long n, double pr) {
	std::cout << "Constructor using " << co << " called\n";
	company = co;
	if (n < 0) {
		std::cout << "Number of shares can't be negative; "
			  << company << " shares set to 0.\n";
		shares = 0;
	} else
		shares = n;
	shareVal = pr;
	setTot();
}
// деструктор класса
Stock::~Stock() {	// деструктор класса, отображающий сообщение
	std::cout << "Bye, " << company << "!\n";
}
// другие методы
void Stock::buy(long num, double price) {
	if (num < 0) {
		std::cout << "Number of shares purchased can't be negative. "
			  << "Transction is aborted.\n";
	} else {
		shares += num;
		shareVal = price;
		setTot();
	}
}

void Stock::sell(long num, double price) {
	using std::cout;
	if (num < 0) {
		cout << "Number of shares sold can't be negative. "
		     << "Transction is aborted.\n";
	} else if (num > shares) {
		cout << "You can't sell more than you have! "
		     << "Transction is aborted.\n";
	} else {
		shares -= num;
		shareVal = price;
		setTot();
	}
}

void Stock::update(double price) {
	shareVal = price;
	setTot();
}

void Stock::show() {
	using std::cout;
	using std::ios_base;
	// установка формата в #.###
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);
	cout << "Company: " << company
	     << " Shares: " << shares << '\n';
	// установка формата в #.##
	cout.precision(2);
	cout << " Share price: $" << shareVal
	     << " Total Worth: $" << totalVal << '\n';
	// восстановление исходного формата
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}
