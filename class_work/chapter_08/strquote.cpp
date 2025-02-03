// strquote.cpp -- ðàçëè÷íûå ðåøåíèÿ
#include <iostream>
#include <string>

using namespace std;

string version1(const string &s1, const string &s2);
const string &version2(string &s1, const string &s2);	// èìååò ïîáî÷íûé ýôôåêò
const string &version3(string &s1, const string &s2);	// íåóäà÷íîå ðåøåíèå

int main() {
	string input;
	string copy;
	string result;
	cout << "Enter a string: ";
	getline(cin, input);				// ââîä ñòðîêè
	copy = input;
	cout << "Your string is entered: " << input << endl;
	result = version1(input, "***");	// îòîáðàæåíèå âûâåäåííîé ñòðîêè
	cout << "Your string enhanced: " << result << endl;
		// âûâîä ðàñøèðåííîé ñòðîêè
	cout << "Your original string: " << input << endl;
		// âûâîä èñõîäíîé ñòðîêè
	result = version2(input, "###");
	cout << "Your string enhanced: " << result << endl;
		// âûâîä ðàñøèðåííîé ñòðîêè
	cout << "Your original string: " << input << endl;
		// âûâîä èñõîäíîé ñòðîêè
	cout << "Resetting original string.\n";
		// âîññòàíîâëåíèå èñõîäíîé ñòðîêè
	input = copy;
	result = version3(input, "@@@");
	cout << "Your string enhanced: " << result << endl;
		// âûâîä ðàñøèðåííîé ñòðîêè
	cout << "Your original string: " << input << endl;
		// âûâîä èñõîäíîé ñòðîêè
	return 0;
}

string version1(const string &s1, const string &s2) {
	string temp;
	temp = s2 + s1 + s2;
	return temp;
}

const string &version2(string &s1, const string &s2) {	// èìååò ïîáî÷íûé ýôôåêò
	s1 = s2 + s1 + s2;
	// âîçâðàò ññûëêè, ïåðåäííîé ôóíêöèè áåçîïàñåí
	return s1;
}

const string &version3(string &s1, const string &s2) {	// íåóäà÷íîå ðåøåíèå
	string temp;
	temp = s2 + s1 + s2;
	//	âîçâðàò ññûëêè íà ëîêàëüíóþ ïåðåìåííóþ íåáåçîïàñåí
	return temp;
}
