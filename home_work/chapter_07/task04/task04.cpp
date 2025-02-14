/*
* task04.cpp
* "���� ���������������� C++ (6 �������), ������ �����
* ����� 7: ������� ��� ����������� ������ C++, ���������� �� ���������������� (������ 4):
* ������ ������� � ��� ������������ ������� ���, ��� ���� ������������� � �������� 7.4. �� ���� �� ��������� �� ������
* ������� ��������� ����� �� ������ ������, ����������� ����� �������. (��������, �� ������ ������� 5 ����� �� ����
* 1-47.) �� ��� �� ���������� ���� ����� (���������� �����������) �� ������� ���������, ������ ��� 1-27. ����� ��������
* ������� ����, �� ������ ��������� ������� ��� ������. ���� �������� ����������� ��� ����������� ���������� ����
* ������� � ����, ���������� �� ����������� ���������� ����������. ��������, ����������� �������� � ��������� �����
* ������� ����������� ��� ����������� ���������� 5 ������� �� 47, ��������� �� ����������� ���������� ������ ������ ��
* 27. ������������� ������� 7.4 ��� ���������� ����������� �������� � ����� �������.
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