// stock00.h -- интерфейс класса Stock
// верси¤ 00
#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>

class Stock {	// объявление класса
	private:
		std::string company;
		long shares;
		double shareVal;
		double totalVal;
		void setTot() { totalVal = shares * shareVal; }
	public:
		void acquire(const std::string &co, long n, double pr);
		void buy(long num, double price);
		void sell(long num, double price);
		void update(double price);
		void show();
};		// обратите внимание на точку с запятой в конце

#endif
