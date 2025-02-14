/*
* task09.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 5: Циклы и выражения отношений, Упражнения по программированию (Задача 9):
* Напишите программу, соответствующую описанию программы из упражнения 8, но с использованием объекта string вместо
* символьного массива. Включите заголовочный файл string и применяйте операции отношений для выполнения проверки.
*/
#include <iostream>
#include <string>

int main() {
	using namespace std;
	string word;
	int count = 0;
	cout << "Enter words. Press \"done\" for quit.\n";
	cin >> word;
	while (word != "done") {
		count++;
		cin >> word;
	}
	cout << "Count of the words: " << count;
	return 0;
}
