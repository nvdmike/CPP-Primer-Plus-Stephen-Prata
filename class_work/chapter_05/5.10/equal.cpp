// equal.cpp -- равенство или присваивание
#include <iostream>

int main() {
	using namespace std;
	int quizscores[10] = {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};
	cout << "Doing it right:\n";	// правильно
	int i;
	for (i = 0; quizscores[i] == 20; i++)
		cout << "quiz " << i << " is a 20\n";
	// Предупреждение: возможно, лучше почитать об этой программе,
	// чем в действительности запускать её.
	cout << "Doing it right:\n";	// неправильно
	for (i = 0; quizscores[i] = 20; i++)
		cout << "quiz " << i << " is a 20\n";
	return 0;
}
