// getinfo.cpp -- ввод и вывод
#include <iostream>

int main() {
	using namespace std;
	int carrots;
	cout << "How many carrots do yo have?" << endl;
	cin >> carrots;	// ввод C++
	cout << "Here are two more. ";
	carrots = carrots + 2;
	// следующая строка выполняет конкатенацию вывода
	cout << "Now you have " << carrots << " carrots." << endl;
	return 0;
}
