// forstr1.cpp -- использование цикла for для строки
#include <iostream>
#include <string>

int main() {
	using namespace std;
	cout << "Enter a word: ";
	string word;
	getline(cin, word); // изначально было cin >> word; переделал, чтобы можно было менять местами буквы в предложениях с пробелами
	// отображение символов в обратном пор¤дке
	for (int i = word.size() - 1; i >= 0; i--)
		cout << word[i];
	cout << "\nBye.\n";
	return 0;
}
