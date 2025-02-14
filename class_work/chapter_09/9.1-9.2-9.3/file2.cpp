// file2.cpp -- содержит функции, вызываемые в file1.cpp
#include <iostream>
#include <cmath>
#include "coordin.h"	// шаблоны структур, прототипы функций
// преобразование пр¤моугольных координат в пол¤рные
polar rectToPolar(rect xypos) {
	using namespace std;
	polar answer;
	answer.distance =
		sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle =
		atan2(xypos.y, xypos.x);
	return answer;	// возврат структуры polar
}
// отображение пол¤рных координат с преобразованием радиан в градусы
void showPolar(polar dapos) {
	using namespace std;
	const double RAD_TO_DEG = 57.29577951;
	cout << "distance = " << dapos.distance;
	cout << ", angle = " << dapos.angle * RAD_TO_DEG;
	cout << " degrees\n";
}
