// strctptr.cpp -- функции с аргументами-указателями на структуры
#include <iostream>
#include <cmath>
// объявление структур
struct polar {
	double distance;	// расстояние от исходной точки
	double angle;		// направление от исходной точки
};
struct rect {
	double x;		// расстояние по горизонтали от исходной точки
	double y;		// расстояние по вертикали от исходной точки
};
// прототипы
void rect_to_polar(const rect *pxy, polar *pda);
void show_polar(const polar *pda);

int main() {
	using namespace std;
	rect rplace;
	polar pplace;
	cout << "Enter the x and y values: ";		// ввод значений x и y
	while (cin >> rplace.x >> rplace.y) {
		rect_to_polar(&rplace, &pplace);	// передача адресов
		show_polar(&pplace);			// передача адресов
		cout << "Next two numbers (q to quit): ";
			// ввод следующих двух чисел (q для завершения)
	}
	cout << "Done.\n";
	return 0;
}
// отображения полярных координат с преобразованием радиан
void show_polar(const polar *pda) {
	using namespace std;
	const double RAD_TO_DEG = 57.29577951;			// преобразование радианы в градусы
	cout << "distance = " << pda->distance;
	cout << ", angle = " << pda->angle * RAD_TO_DEG;	// преобразование радианы в градусы
	cout << " degrees.\n";
}
// преобразование прямоугольных координат в полярные
void rect_to_polar(const rect *pxy, polar *pda) {
	using namespace std;
	pda->distance =
		sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
	pda->angle = atan2(pxy->y, pxy->x);
}
