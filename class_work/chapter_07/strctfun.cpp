// strctfun.cpp -- функции с аргументами-структурами
#include <iostream>
#include <cmath>
// ќбъ€вление структур
struct polar {
	double distance;	// рассто€ние от исходной точки
	double angle;		// направление от исходной точки
};
struct rect {
	double x;			// рассто€ние по горизонтали от исходной точки
	double y;			// рассто€ние по вертикали от исходной точки
};
// ѕрототипы
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main() {
	using namespace std;
	rect rplace;
	polar pplace;
	cout << "Enter the x and y values: ";	// ввод значений x и y
	while (cin >> rplace.x >> rplace.y) {	// ловкое использование cin
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers (q to quit): ";
			// ¬вод следующих двух чисел (q дл€ завершени€)
	}
	cout << "Done.\n";
	return 0;
}
// ѕреобразование пр€моугольных координат в пол€рные
polar rect_to_polar(rect xypos) {
	using namespace std;
	polar answer;
	answer.distance =
		sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;	// возврат структуры polar
}
// ќтображение пол€рных координат
void show_polar(polar dapos) {
	using namespace std;
	const double RAD_TO_DEG = 57.29577951;				// преобразование радианы в градусы
	cout << "distance = " << dapos.distance;
	cout << ", angle = " << dapos.angle * RAD_TO_DEG;	// преобразование радианы в градусы
	cout << " degrees.\n";
}