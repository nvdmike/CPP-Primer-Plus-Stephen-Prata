// stock00.cpp -- реализация класса Stock
// верси¤ 00
#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string &co, long n, double pr) {
	company = co;
	if (n < 0) {
		// количество пакетов не может быть отрицательным; устанавливается в 0.
		std::cout << "Numbers of shares can't be negative; "
			  << company << " shares set to 0.\n";
		shares = 0;
	} else {
		shares = n;
		shareVal = pr;
		setTot();
	}
}

void Stock::buy(long num, double price) {
	if (num < 0) {
		// количество приобретаемых пакетов не может быть отрицательным. Транзакция прервана.
		std::cout << "Numbers of shares purchased can't be negative. "
			  << "Transaction is aborted.\n";
	} else {
		shares += num;
		shareVal = price;
		setTot();
	}
}

void Stock::sell(long num, double price) {
	if (num < 0) {
		// количество продаваемых пакетов не может быть отрицательным. Транзакция прервана.
		std::cout << "Numbers of shares sold can't be negative. "
			  << "Transaction is aborted.\n";
	} else if (num > shares) {
		// нельз¤ продать больше того, чем находится во владении. Транзакция прервана.
		std::cout << "You can't sell more than you have! "
			  << "Transaction is aborted.\n";
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
	// вывод названия компании, количества пакетов, цены пакета и общей стоимости.
	std::cout << "Company: " << company
		  << " Shares: " << shares << '\n';
	// установка формата в #.##
	cout.precision(2);
	cout << " Share price: $" << shareVal
	     << " Total Worth: $" << totalVal << '\n';
	// восстановление исходного формата
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}
