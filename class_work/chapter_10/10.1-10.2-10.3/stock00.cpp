// stock00.cpp -- ���������� ������ Stock
// ������ 00
#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string &co, long n, double pr) {
	company = co;
	if (n < 0) {
		// ���������� ������� �� ����� ���� �������������; ��������������� � 0.
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
		// ���������� ������������� ������� �� ����� ���� �������������. ���������� ��������.
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
		// ���������� ����������� ������� �� ����� ���� �������������. ���������� ��������.
		std::cout << "Numbers of shares sold can't be negative. "
				  << "Transaction is aborted.\n";
	} else if (num > shares) {
		// ������ ������� ������ ����, ��� ��������� �� ��������. ���������� ��������.
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
	// ��������� ������� � #.###
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);
	// ����� �������� ��������, ���������� �������, ���� ������ � ����� ���������.
	std::cout << "Company: " << company
			  << " Shares: " << shares << '\n'
			  << " Share price: $" << shareVal;
	// ��������� ������� � #.##
	cout.precision(2);
	cout << " Total Worth: $" << totalVal << '\n';
	// �������������� ��������� �������
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
}