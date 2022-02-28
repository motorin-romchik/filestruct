#ifndef HEADER_H
#define HEADER_H

struct pc {
	string company;
	double weight;
	double price;
};
void output(const pc& p);
void input(pc& p);
void in(pc* p, int n);
void out(const pc* p, int n);
bool outstruct(pc* p, int n, char* File);
bool instruct(int n, char* File);
#endif
