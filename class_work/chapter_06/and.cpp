// and.cpp -- использование логической операции "И"
#include <iostream>

const int AR_SIZE = 6;

int main() {
	using namespace std;
	float naaq[AR_SIZE];
	cout << "Enter the NAAQs (New Age Awareness Quotiens) "
	     << "of\nyour neighbors. Program terminates "
	     << "when you make\n" << AR_SIZE << " entries "
	     << "or enter a negative value.\n";
	int i = 0;
	float temp;
	cout << "First value: ";		// ввод первого значения
	cin >> temp;
	while (i < AR_SIZE && temp >= 0)	// два критерия завершения
	{
		naaq[i] = temp;
		++i;
		if (i < AR_SIZE)		// в массиве ещё есть место
		{
			cout << "Next value: ";
			cin >> temp;		// ввод следующего значения
		}
	}
	if (i == 0)
		cout << "No data--bye\n";	// данные отсутствуют
	else {
		cout << "Enter your NAAQ: ";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++)
			if (naaq[j] > you)
				++count;
		cout << count;
		cout << " of your naighbors have greater awareness of\n"
		     << "the New Age than tou do.\n";
	}
}
