/*
* task07.cpp
* "Язык программирования C++ (6 издание), Стивен Прата
* Глава 6: Операторы ветвления и логические операции, Упражнения по программированию (Задача 7):
* Напишите программу, которая читает слова по одному за раз, пока не будет введена отдельная буква q. После этого
* программа должна сообщить количество слов, начинающихся с гласных, количество слов, начинающихся с согласных, а также
* количество слов, не попадающих ни в одну из этих категорий. Одним из возможных подходов может быть применение
* isalpha() для различения слов, начинающихся с букв, и остальных, с последующим применением if или switch для
* идентификации тех слов, прошедших проверку isalpha(), которые начинаются с гласных. Пример запуска может выглядеть
* так:
* Enter words, (q to quit):
* The 12 awesome oxen ambled
* quetly across 15 meters of lawn. q
* 5 words beginning with vowels
* 4 words beginning with consonant
* 2 others
*/
#include <iostream>

int main() {
	char letters[] = { 'a', 'A', 'e', 'E', 'i', 'I', 'y', 'Y', 'o', 'O', 'u', 'U' };
	int vowels = 0, consonants = 0, others = 0;
	std::string word;
	std::cout << "Enter words, (q to quit):\n";
	while (std::cin >> word && word != "q") {
		if (isalpha(word[0])) {
			switch (word[0]) {
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'y':
			case 'Y':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				vowels++;
				break;
			default:
				consonants++;
				break;
			}
		} else
			others++;
	}
	std::cout << vowels << " words beginning with vowels" << std::endl;
	std::cout << consonants << " words beginning with consonant" << std::endl;
	std::cout << others << " other" << std::endl;
	return 0;
}
