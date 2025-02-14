/*
* task06.cpp
* "���� ���������������� C++ (6 �������), ������ �����
* ����� 7: ������� ��� ����������� ������ C++, ���������� �� ���������������� (������ 6):
* �������� ���������, ������������ ��������� ���� �������.
* Fill_array() ��������� � �������� ��������� ��� ������� ��������� ���� double � ������ ����� �������. ��� ����������
* ������������ ������ �������� double ��� ��������� �� � ������. ���� ������������ ��� ���������� ������� ���� �����
* ������������ ������ ���������� �������� � ����������� �������������� ���������� ���������.
* Show_array() ��������� � �������� ���������� ��� ������� �������� double, � ��� �� ��� ������, � ���������� ����������
* �������.
* Revers_array() ��������� � �������� ��������� ��� ������� �������� double, � ��� �� ��� ������, � �������� ������� ���
* ��������� �� ���������������.
* ��������� ������ ������������ ��� ������� ��� ���������� �������, ��������� ������� ��� ���������, ����� ������� �
* ����������, � ����������� ������������.
*/
#include <iostream>

const int SIZE = 5;

int fillArray(double ar[], int size);
void showArray(const double *ar, int size);
void reverseArray(double ar[], int size);

int main() {
	double ar[SIZE];
	int s = fillArray(ar, SIZE);
	showArray(ar, s);
	std::cout << "\nAnd now I'll reverse this array:\n";
	reverseArray(ar, s);
	showArray(ar, s);
	return 0;
}

int fillArray(double ar[], int size) {
	int num;
	int i;
	for (i = 0; i < size; ++i) {
		std::cout << "Enter #" << i + 1 << " value: ";
		std::cin >> num;
		if (!std::cin) {
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "Error. Input process terminated.\n";
			break;
		} else if (num < 0)
			break;
		ar[i] = num;
	}
	return i;
}

void showArray(const double *ar, int size) {
	std::cout << "Values: ";
	for (int i = 0; i < size; ++i)
		std::cout << ar[i] << " ";
}

void reverseArray(double ar[], int size) {
	double temp;
	for (int i = 1; i < (size / 2); ++i) {	// ��������� �� ������� �������� � ������ �� �������� �������, �.�. �����
		// ���������� ������� �������� ��� �� ���������
		temp = ar[i];						// ��������� �������� ���������������� �������� �� ��������� ����������
		ar[i] = ar[size - i - 1];			// temp, ����� ����������� ar[i] �������� ���������������� �������� � �����
		ar[size - i - 1] = temp;			// ����������� ���������������� �������� � ����� �������� ar[i], �������
		// ���� ��������� �� ��������� ���������� temp
	}
}