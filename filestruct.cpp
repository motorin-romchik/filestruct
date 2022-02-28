#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
using namespace std;
#include "Header.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	bool flag = false;
	int lenghtar;//array lenght
	cout << "Добро пожаловать в систему учета данных ноутбуков." << endl;
	int var = 0;
	cout << "	Меню" << endl;
	cout << "	1.Ввод в систему." << endl;
	cout << "	2.Выход из системы." << endl;
	cin >> var;

	if (var == 1) {
		//input
		cout << "   Сколько ноутбуков будем регистрировать : ";
		cin >> lenghtar;
		pc* laptop = new pc[lenghtar];
		system("color 2");
		int count = 0;
		in(laptop, lenghtar);
		flag = true;
		system("cls");
		var = 0;
		cout << "	Занос массива в файл." << endl;

		outstruct(laptop, lenghtar, (char*)"1.txt");
		Sleep(500);
		system("cls");
		system("color 0");

		cout << "	Вывод из файла."<<endl;

		instruct(lenghtar, (char*)"1.txt");
		delete[]laptop;
	}
	else {
		return false;
	}
	
	return 0;
}
