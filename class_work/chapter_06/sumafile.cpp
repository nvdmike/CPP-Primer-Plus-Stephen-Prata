// sumafile.cpp -- чтение файла
#include <iostream>
#include <fstream>	// поддержка файлового ввода-вывода
#include <cstdlib>	// поддержка exit()

const int SIZE = 60;

int main() {
	using namespace std;
	char filename[SIZE];
	ifstream inFile;					// объект для обработки файлового ввода
	cout << "Enter name of data file: ";			// запрос имени файла данных
	cin.getline(filename, SIZE);
	inFile.open(filename);					// ассоциирование inFile с файлом
	if (!inFile.is_open()) {				// не удалось открыть файл
		cout << "Could not open the file " << filename << endl;
		cout << "Progran terminating.\n";
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0;						// количество прочитанных элементов
	// Почему-то при таком варианте файлового ввода, последнее значение не читается
	inFile >> value;					// ввод первого значения
	//cout << value << endl;
	while (inFile.good()) {					// пока ввод успешен и не достигнут EOF
		++count;
		sum += value;
		inFile >> value;
		//cout << value << endl;
	}
	// чтобы считывалось последнее значение, необходимо добавить подсчёт после цикла
	++count;
	sum += value;
	// Можно заменить на такой код:
	//while (inFile >> value) {				// пока ввод успешен и не достигнут EOF
	//	++count;
	//	sum += value;
	//}
	if (inFile.eof())					// достигнут конец файла
		cout << "End of file reached.\n";
	else if (inFile.fail())					// ввод прекращён из-за несоответствия типа данных
		cout << "Input terminated by data mismatch.\n";	
	else							// ввод прекращён по неизвестной причине
		cout << "Input terminated by unknown reason.\n";
	if (0 == count)						// данные для обработки отстутствуют
		cout << "No data processed.\n";
	else {
		cout << "Items read: " << count << endl;	// прочитано элементов
		cout << "Sum: " << sum << endl;			// сумма
		cout << "Average: " << sum / count << endl;	// среднее значение
	}
	inFile.close();
	return 0;
}
