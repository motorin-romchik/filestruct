#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "Header.h"

void input(pc& p) {

	const int i = 30;
	cout << " �������� �����: ";
	cin.ignore();
	getline(cin, p.company);
	cout << " ���: ";
	cin >> p.weight;
	cout << " ����: ";
	cin >> p.price;


}
void output(const pc& p) {
	cout << " �������� �����: ";
	cout << p.company;
	cout << endl << " ���: ";
	cout << p.weight;
	cout << endl << " ����: ";
	cout << p.price << endl;
}
void in(pc* p, int n) {
	int count = 0;

	for (int i = 0;i < n;i++) {
		count++;
		cout << "������� � " <<count<< endl;
		input(p[i]);
	}
	return;

}
void out(const pc* p, int n) {
	int count = 0;
	

	for (int i = 0;i < n;i++) {
		count++;
		cout << endl;
		cout << "������� � "<<count << endl;
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