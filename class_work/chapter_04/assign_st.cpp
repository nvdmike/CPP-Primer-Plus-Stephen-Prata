// assign_st.cpp -- присваивание структур
#include <iostream>

struct inflatable {
	char name[20];
	float volume;
	double price;
};

int main() {
	using namespace std;
	inflatable bouquet = {
		"sunflowers",
		0.20,
		12.49
	};
	inflatable choise;
	cout << "bouquet: " << bouquet.name << " for $";
	cout << bouquet.price << endl;
	choise = bouquet;	// присваивание одной структуры другой
	cout << "choise: " << choise.name << " for $";
	cout << choise.price << endl;
	return 0;
}
