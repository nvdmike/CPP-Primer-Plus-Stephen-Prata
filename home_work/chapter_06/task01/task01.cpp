/*
* task01.cpp
* "���� ���������������� C++ (6 �������), ������ �����
* ����� 6: ��������� ��������� � ���������� ��������, ���������� �� ���������������� (������ 1):
* �������� ���������, ������� ������ ������������ ���� �� ������� @ � ��������� ���, �� ����������� ���������� ����,
* ���������� ������ ����� �������� �������� � ����� ������� �������� � ��������. (�� �������� � ��������� �������
* cctype.)
*/
#include <iostream>
#include <cctype>

int main()
{
    std::cout << "Enter text, and type @ to terminate input: ";
    char ch = '0';
    while (std::cin.get(ch) && ch != '@') {
        if (islower(ch))
            ch = toupper(ch);
        else if (isupper(ch))
            ch = tolower(ch);
        else if (isdigit(ch)) {
            std::cin.get(ch);
            continue;
        }
        std::cout << ch;
    }
    return 0;
}