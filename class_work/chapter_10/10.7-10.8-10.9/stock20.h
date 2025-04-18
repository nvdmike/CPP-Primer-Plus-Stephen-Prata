// stock20 -- дополненная версия
#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>

class Stock {
	private:
		std::string company;
		int shares;
		double shareVal;
		double totalVal;
		void setTot() { totalVal = shares * shareVal; }
	public:
		Stock();	// конструктор по умолчанию
		Stock(const std::string &co, long n = 0, double pr = 0.0);
		~Stock();	// деструктор
		void buy(long num, double price);
		void sell(long num, double price);
		void update(double price);
		void show() const;
		const Stock &topVal(const Stock &s) const;
};

#endif
