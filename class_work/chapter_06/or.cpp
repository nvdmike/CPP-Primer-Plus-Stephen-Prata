// or.cpp -- использование логической операции "ИЛИ"
#include <iostream>

int main() {
	using namespace std;
	cout << "This program may reformat your hard disk\n"
	     << "and destroy all your data.\n"
	     << "Do you wish to continue? <y/n> ";
	char ch;
	cin >> ch;
	if ('y' == ch || 'Y' == ch)		// y или Y
		cout << "You were warned!\a\a\n";
	else if ('n' == ch || 'N' == ch)	// n или N
		cout << "A wise choice ... bye\n";
	else
		cout << "That wasn't a y or n! Apparently you "
			"can't follow\ninstrunctions, so "
			"I'll trash your disk anyway.\a\a\a\n";
	return 0;
}
