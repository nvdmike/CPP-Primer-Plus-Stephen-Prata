/*
* task08.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 5: Циклы и выражения отношений, Упражнения по программированию (Задача 8):
* Напишите программу, которая использует массив char и цикл для чтения по одному слову за раз до тех пор, пока не будет
* введено слово done. Затем программа должна сообщить количество введённых слов (исключая done). Пример запуска должен
* быть таким:
* Enter words (press "done" for quit):
* anteater birthday category dumpster
* envy finagle geometry done for sure
* Count of the words: 7
* Вы должны вклюючить заголовочный файл cstring и применять функцию strcmp() для выполнения проверки.
*/
#include <iostream>
#include <cstring>

int main() {
	using namespace std;
	char word[20];
	int count = 0;
	cout << "Enter words (press \"done\" for quit):\n";
	cin >> word;
	while (strcmp(word, "done")) {
		count++;
		cin >> word;
	}
	cout << "Count of the words: " << count;
	return 0;
}
