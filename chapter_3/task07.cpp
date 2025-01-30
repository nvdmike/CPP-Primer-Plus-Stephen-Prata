/*
* task07.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 3: Работа с данными, Упражнения по программированию (Задача 7):
* Напишите программу, которая запрашивает расход бензина в европейском стиле (количество литров на 100 километров) и
* преобразует его в стиль, принятый в США - число миль на галлон. Обратите внимание, что кроме использования других
* единиц измерений, принятый в США подход (расстояние/топливо) противоположен европейском (топливо/расстояние). Учтите,
* что 100 километров соответствует 62.14 милям, а 1 галлон составляет 3.875 литра. Таким образом, 19 миль на галлон
* примерно равно 12.4 литров на 100 км, а 27 миль на галлон - примерно 8.7 литров на 100 км.
*/
#include <iostream>

int main() {
    using namespace std;
    float const MILES_PER_KILOMETER = 100 / 62.14;			        // количество миль в 1км
    float const GALLONS_PER_LITER = 3.875;					// количество галлонов в 1 литре
    float distanceInKilometers, fuelConsumInLiters, fuelPerKilometer, fuelPerMile, distanceInMilesPerGallon;
    cout << "Enter the distance in km: ";
    cin >> distanceInKilometers;					        // пройденная дистанция
    cout << "Enter fuel consumption in liters: ";
    cin >> fuelConsumInLiters;						        // расход топлива в литрах
    fuelPerKilometer = distanceInKilometers / fuelConsumInLiters;		// расход в литрах на километр
    fuelPerMile = fuelPerKilometer / MILES_PER_KILOMETER;			// пройденная дистанция в милях
    distanceInMilesPerGallon = fuelPerMile * GALLONS_PER_LITER;			// колличество миль на одном галлоне
    cout << "Miles per gallon: " << distanceInMilesPerGallon << endl;
    return 0;
}
