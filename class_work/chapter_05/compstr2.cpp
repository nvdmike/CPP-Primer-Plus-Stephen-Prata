// compstr2.cpp -- сравнивание стрк с использованием класса string
#include <iostream>
#include <string>	// класс string

int main() {
	using namespace std;
	string word = "?ate";
	for (char ch = 'a'; word != "mate"; ch++) {
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;
	return 0;
}
