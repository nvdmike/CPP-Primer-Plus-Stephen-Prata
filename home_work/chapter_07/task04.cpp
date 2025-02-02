/*
* task04.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 7: Функции как программные модули C++, Упражнения по программированию (Задача 4):
* Многие лотереи в США организованы подобно той, что была смоделирована в листинге 7.4. Во всех их вариациях вы должны
* выбрать несколько чисел из одного набора, называемого полем номеров. (Например, вы можете выбрать 5 чисел из поля
* 1-47.) Вы так же указываете один номер (называемый меганомером) из второго диапазона, такого как 1-27. Чтобы выиграть
* главный приз, вы должны правильно угадать все номера. Шанс выиграть вычисляется как вероятность угадывания всех
* номеров в поле, умноженная на вероятность угадывания меганомера. Например, вероятность выигрыша в описанном здесь
* примере вычисляется как вероятность угадывания 5 номеров из 47, уможенная на вероятность угадывания одного номера из
* 27. Модифицируйте листинг 7.4 для вычисления вероятность выигрыша в такой лотерее.
*/
#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main() {
	using namespace std;
	double total, total2, choices;
	cout << "Enter the total number of choices on the game card and\n"
		"the number of picks allowed and the total number of\n"
		"choices on the second game field : \n";
	while ((cin >> total >> choices >> total2) && choices <= total) {
		cout << "You have one chance in ";
		cout << probability(total, choices) * probability(total2, 1);
		cout << " of winning.\n";
		cout << "Next three numbers (q to quit): ";
	}
	cout << "bye\n";
	return 0;
}

long double probability(unsigned numbers, unsigned picks) {
	long double result = 1.0;
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}