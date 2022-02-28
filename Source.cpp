#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "Header.h"

void input(pc& p) {

	const int i = 30;
	cout << " Название фирмы: ";
	cin.ignore();
	getline(cin, p.company);
	cout << " Вес: ";
	cin >> p.weight;
	cout << " Цена: ";
	cin >> p.price;


}
void output(const pc& p) {
	cout << " Название фирмы: ";
	cout << p.company;
	cout << endl << " Вес: ";
	cout << p.weight;
	cout << endl << " Цена: ";
	cout << p.price << endl;
}
void in(pc* p, int n) {
	int count = 0;

	for (int i = 0;i < n;i++) {
		count++;
		cout << "Ноутбук № " <<count<< endl;
		input(p[i]);
	}
	return;

}
void out(const pc* p, int n) {
	int count = 0;
	

	for (int i = 0;i < n;i++) {
		count++;
		cout << endl;
		cout << "Ноутбук № "<<count << endl;
		output(p[i]);
	}
	cout << endl;
	return;
}
bool outstruct(pc* p, int n, char* File) {
	//int i = 1;
	ofstream fout(File, ios::trunc | ios::binary);
	if (!fout)
		return false;
	else
	{
		fout.write((char*)(p), sizeof(pc) * n);
	}
	fout.close();
	return true;
}
bool instruct(int n, char* File)
{
	ifstream fin(File, ios::binary);
	pc* d = new pc[n];
	if (!fin)
		return false;
	else {
		fin.read((char*)d, sizeof(pc) * n);
	}
	
	out(d, n);
	fin.close();
	return true;
}