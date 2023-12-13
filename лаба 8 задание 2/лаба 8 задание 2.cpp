#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <clocale>
#include <string.h>

using namespace std;

/*
* Лабораторная работа 8. Поливцев Михаил, ИВТ-31. Задание 2. Индивидуальный вариант задания 16.
* Дана строка-предложение на английском языке. Вывести самое короткое слово в предложении. 
* Если таких слов несколько, то вывести последнее из них. 
* Словом считать набор символов, не содержащий пробелов, знаков препинания и ограниченный пробелами,
* знаками препинания или началом/концом строки.
*/

int main() {
	setlocale(LC_ALL, "ru");

	char s[255];
	cout << "Введите предолжение:" << endl;
	cin.getline(s, 255);

	char *word, *res;
	word = strtok(s, " ;-,.!?");
	res = word;
	while (word) {
		if (strlen(word) <= strlen(res)) {
			res = word;
		}
		word = strtok(NULL, " ;-,.!?");
	}

	cout << "самое короткое слово: " << res << endl;
}
