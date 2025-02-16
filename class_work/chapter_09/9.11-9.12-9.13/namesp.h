// namesp.h
#include <string>
// создание пространств имён pers и debts
namespace pers {
	struct person {
		std::string fname;
		std::string lname;
	};

	void getPerson(person &);
	void showPerson(const person &);
}

namespace debts {
	using namespace pers;

	struct debt {
		person name;
		double amount;
	};

	void getDebt(debt &);
	void showDebt(const debt &);
	double sumDebts(const debt ar[], int n);
}
