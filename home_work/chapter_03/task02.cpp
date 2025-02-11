/*
* task02.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 3: Работа с данными, Упражнения по программированию (Задача 2):
* Напишите короткую программу, которая запрашивает рост в футах и дюймах и вес в фунтах. (Для хранения этой информации
* используйте три переменных.) Программа должна выдать индекс массы тела (body mass index - BMI). Чтобы рассчитать BMI,
* сначала преобразуйте рост в футах и дюймах в рост в дюймах (1 фут = 12 дюймов). Затем преобразуйте вес в фунтах в
* массу в килограммах, разделив на 2.2. После этого рассчитайте BMI, разделив массу в килограммах на квадрат роста в
* метрах. Для представления различных коэффициентов преобразования используйте символические константы.
*/
#include <iostream>

int main() {
	using namespace std;
	const int INCHES_PER_FEET = 12;		// количество дюймов в футе
	const double POUNDS_PER_KILOGRAM = 2.2;	// количество фунтов в килограмме
	const double INCHES_PER_METER = 0.0254;	// количество дюймов в метре
	cout << "Enter the number of feet in your height:\n";
	int feets;
	cin >> feets;
	cout << "Enter the number of inches in your height:\n";
	int inches;
	cin >> inches;
	cout << "Enter your weight in pounds:\n";
	int pounds;
	cin >> pounds;
	int heightInInches = feets * INCHES_PER_FEET + inches;
	float heightInMeters = heightInInches * INCHES_PER_METER;
	float weightInKilograms = pounds / POUNDS_PER_KILOGRAM;
	cout << "Your BMI index is: " << weightInKilograms / (heightInMeters * heightInMeters) << endl;
	return 0;
}
