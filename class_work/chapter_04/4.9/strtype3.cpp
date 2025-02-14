// strtype3.cpp -- дополнительные средства класса string
#include <iostream>
#include <string>	// обеспечение доступа к классу string
#include <cstring>	// библиотека обработки строк в стиле C

int main() {
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";
	// присваивание объектов string и символьных массивов
	str1 = str2;			// копирование str2 в str1
	//  в реализации C++ Visual Studio 2025, необходимо использовать strcpy_s вместо strcpy
	strcpy_s(charr1, charr2);	// копирование charr2 в charr1
	// добавление объектов string и симользных массивов
	str1 += " paste";		// добавление " paste" в конец str1
	//  В реализации C++ Visual Studio 2025, необходимо использовать strcat_s вместо strcat
	strcat_s(charr1, " juice");	// добавление " juice" в конец charr1
	// определение длины объекта string и строки в стиле C
	int len1 = str1.size();		// получение длины str1
	int len2 = strlen(charr1);	// получение длины charr1
	cout << "The string " << str1 << " contains "
	     << len1 << " characters.\n";
	cout << "The string " << charr1 << " contains "
	     << len2 << " characters.\n";
	return 0;
}
