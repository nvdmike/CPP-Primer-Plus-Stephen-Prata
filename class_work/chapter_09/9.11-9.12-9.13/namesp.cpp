// namesp.cpp -- пространства имён
#include <iostream>
#include "namesp.h"

namespace pers {
	using std::cout;
	using std::cin;

	void getPerson(person &rp) {
		cout << "Enter first name: ";	// ввод имени
		cin >> rp.fname;
		cout << "Enter last name: ";	// ввод фамилии
		cin >> rp.lname;
	}

	void showPerson(const person &rp) {
		std::cout << rp.lname << ", " << rp.fname;
	}
}

namespace debts {
	void getDebt(debt &rd) {
		getPerson(rd.name);
		std::cout << "Enter debt: ";	// ввод суммы задолженности
		std::cin >> rd.amount;
	}

	void showDebt(const debt &rd) {
		showPerson(rd.name);
		std::cout << ": $" << rd.amount << std::endl;
	}

	double sumDebts(const debt ar[], int n) {
		double total = 0;
		for (int i = 0; i < n; ++i)
			total += ar[i].amount;
		return total;
	}
}
