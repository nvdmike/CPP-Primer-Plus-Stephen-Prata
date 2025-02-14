// textin2.cpp -- использование cin.get(char)
#include <iostream>

int main() {
	using namespace std;
	char ch;
	int count = 0;
	cout << "Enter characters; enter # to quit:\n";
	cin.get(ch);		// использование функции cin.get(ch)
	while (ch != '#') {
		cout << ch;
		++count;
		cin.get(ch);	// использование её снова
	}
	cout << endl << count << " characters read\n";
	return 0;
}
