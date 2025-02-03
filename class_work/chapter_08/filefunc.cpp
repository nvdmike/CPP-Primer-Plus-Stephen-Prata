// filefunc.cpp -- функция с параметром ostream &
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void file_it(ostream &os, double fo, const double fe[], int n);

const int LIMIT = 5;

int main() {
	ofstream fout;
	const char *fn = "ep-data.txt";
	fout.open(fn);
	if (!fout.is_open()) {
		cout << "Can't open " << fn << ". Bye.\n";	// не удаётся открыть файл
		exit(EXIT_FAILURE);
	}
	double objective;
	// ввод фокусного расстояния объектива телескопа в мм
	cout << "Enter the focal lenght of your"
		"telescope objective in mm: ";
	cin >> objective;
	double eps[LIMIT];
	// ввод фокусного расстояния окуляров в мм
	cout << "Enter the focal lenghts, in mm, of " << LIMIT << " eyepieces:\n";
	for (int i = 0; i < LIMIT; ++i) {
		cout << "Eyepiece #" << i + 1 << ": ";
		cin >> eps[i];
	}
	file_it(fout, objective, eps, LIMIT);
	file_it(cout, objective, eps, LIMIT);
	cout << "Done\n";
	return 0;
}

void file_it(ostream &os, double fo, const double fe[], int n) {
	ios_base::fmtflags initial;
	initial = os.setf(ios_base::fixed);			// сохранение исходного состояния форматирования
	os.precision(0);
	os << "Focal lenght of objective: " << fo << " mm\n";	// фокусное расстояние объектива
	os.setf(ios::showpoint);
	os.precision(1);
	os.width(12);
	os << "f.1. eyepiece";
	os.width(15);
	os << "magnification" << endl;				// коэффициент увеличения
	for (int i = 0; i < n; ++i) {
		os.width(12);
		os << fe[i];
		os.width(15);
		os << int(fo / fe[i] + 0.5) << endl;
	}
	os.setf(initial);					// восстановление исходного состояние форматирования
}
