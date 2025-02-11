// strc_ref.cpp -- использование ссылок на структуру
#include <iostream>
#include <string>

struct free_throws {
	std::string name;
	int made;
	int attempts;
	float percent;
};

void display(const free_throws &ft);
void set_pc(free_throws &ft);
free_throws &accumulate(free_throws &target, const free_throws &source);

int main() {
	// частичные инициализации - оставшиеся неинициализированными
	// члены устанвливаются в 0
	free_throws one = { "Ifelsa Branch", 13, 14 };
	free_throws two = { "Andor Knott", 10, 16 };
	free_throws three = { "Minnie Max", 7, 9 };
	free_throws four = { "Whily Looper", 5, 9 };
	free_throws five = { "Long Long", 6, 14 };
	free_throws team = { "Throwgoods", 0, 0 };
	// иницаилизация не производится
	free_throws dup;
	set_pc(one);
	display(one);
	accumulate(team, one);
	display(team);
	// использование возвращаемого значения в качестве аргумента
	display(accumulate(team, two));
	accumulate(accumulate(team, three), four);
	display(team);
	// использование возвращаемого значения в присваивании
	dup = accumulate(team, five);
	std::cout << "Displaying team:\n";
	display(team);
	// отображение dup после присваивания
	std::cout << "Displaying dup after assignment:\n";
	display(dup);
	set_pc(four);
	// неблагоразумное присваивание
	accumulate(dup, five) = four;
	// отображение dup после неблагоразумного присваивания
	std::cout << "Displaying dup after ill-advised assignment:\n";
	display(dup);
	return 0;
}

void display(const free_throws &ft) {
	using std::cout;
	cout << "Name: " << ft.name << '\n';		// вывод члена name
	cout << "Made: " << ft.made << '\t';		// вывод члена made
	cout << "Attempts: " << ft.attempts << '\t';	// вывод члена attempts
	cout << "Percent: " << ft.percent << '\n';	// вывод члена percent
}

void set_pc(free_throws& ft) {
	if (ft.attempts != 0)
		ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
	else
		ft.percent = 0;
}

free_throws &accumulate(free_throws &target, const free_throws &source) {
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}
