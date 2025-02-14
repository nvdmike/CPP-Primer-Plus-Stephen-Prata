/*
* task03.cpp
* "���� ���������������� C++ (6 �������), ������ �����
* ����� 7: ������� ��� ����������� ������ C++, ���������� �� ���������������� (������ 3):
* ����� ������� ��������� ���������� ���������:
* struct box {
* 	char maker[40];
* 	float height;
* 	float width;
* 	float lenght;
* 	float volume;
* };
* �. �������� �������, ����������� ��������� box �� �������� � ������������ ��� � �����.
* �. �������� �������, ����������� ����� ��������� box � ��������������� �������� ����� volume ������ ������������
* ��������� ��� ������.
* �. �������� ������� ���������, ������� ���������� ��� ��� �������.
*/
#include <iostream>

struct box {
	char maker[40];
	float height;
	float width;
	float lenght;
	float volume;
};

void displayBox(box *);
void displayBoxValues(box);

int main() {
	box b1 = { "MASTER", 1, 2, 3, 4 };
	displayBox(&b1);
	displayBoxValues(b1);
	return 0;
}

void displayBox(box *b) {
	b->volume = b->height * b->width * b->lenght;
}

void displayBoxValues(box b) {
	std::cout << "Maker: " << b.maker << "\n"
			  << "Height of box: " << b.height << "\n"
			  << "Width of box: " << b.width << "\n"
			  << "Lenght of box: " << b.lenght << "\n"
			  << "Volume of box: " << b.volume << "\n";
}