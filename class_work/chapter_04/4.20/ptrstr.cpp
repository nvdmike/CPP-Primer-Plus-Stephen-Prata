// ptrstr.cpp -- использование указателей на строки
#include <iostream>
#include <cstring>	// объявление strlen(), strcpy()

int main() {
	using namespace std;
	char animal[20] = "bear";			// animal содержит bear
	const char *bird = "wren";			// bird содержит адрес строки
	char *ps;					// не инициализировано
	cout << animal << " and ";			// отображение bear
	cout << bird << "\n";				// отображение wren
	// cout << ps << "\n";				// может отобразить мусор, но может вызвать
							// аварийное завершение программы
	cout << "Enter a kind of animal: ";
	cin >> animal;					// нормальное, если вводится меньше 20 символов
	// cin >> ps; очень опасная ошибка, чтобы пробовать;
	// ps не указывает нга выделенное пространство
	ps = animal;					// установка ps в указатель на строку
	cout << ps << "!\n";				// нормально; то же, что и применение animal
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << *ps << endl;//(int *) ps << endl;
	ps = new char[strlen(animal) + 1];		// получение нового хранилища
	// В книге используется функция strcpy(ps, animal), однако в реализации C++ в Visual Studio 2025
	// данная функция считаеся небезопасной и выведена, поэтому предлагается использовать
	// функцию копирования строк strcpy_s, которая требует 3 параметра:
	// 1. расположение строкового буфера назначения
	// 2. размер строкового буфера назначения в единицах char
	// 3. Исходная строка, завершающаяся нулем
	strcpy_s(ps, strlen(animal) + 1, animal);	// копирование строки в новое хранилище
	cout << "After using strcpy():\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;
	delete [] ps;
	return 0;
}
