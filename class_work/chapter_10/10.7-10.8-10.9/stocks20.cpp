// stocks20.cpp -- дополненная версия
#include <iostream>
#include "stock20.h"
// конструкторы
Stock::Stock() {	// конструктор по умолчанию
	company = "no name";
	shares = 0;
	shareVal = 0.0;
	totalVal = 0.0;
}

Stock::Stock(const std::string &co, long n, double pr) {
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
// деструктор
Stock::~Stock() {	// деструктор не выводящий сообщений
}
// другие методы
void Stock::buy(long num, double price) {
	if (num < 0) {
		std::cout << "Number of shares purchased can't be negative. "
			  << "Trasaction aborted.\n";
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
		     << "Trasaction aborted.\n";
	} else if (num > shares) {
		cout << "You can't sell more than you have! "
		     << "Trasaction aborted.\n";
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

void Stock::show() const {
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

const Stock &Stock::topVal(const Stock &s) const {
	if (s.totalVal > totalVal)
		return s;
	else
		return *this;
}
