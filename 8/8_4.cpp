#include "stdafx.h"
#include <iostream>
#include <cstring>

using namespace std;

struct stringy{
	char * str;
	int ct;
};

void set(stringy &s, const char *c);
void show(const stringy &s, int n = 1);
void show(const char *c, int n = 1);

int main(){
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";
	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
	system("pause");
	return 0;
}

void set(stringy &s, const char *c){
	s.ct = strlen(c);
	s.str = new char[s.ct + 1];
	strcpy_s(s.str, strlen(c) + 1, c); //strcpy unsafe function, compilation error on VS11
}

void show(const stringy &s, int n){
	for(int i = 0; i < n; i++)
		cout << s.str << endl;
}

void show(const char *c, int n){
	for(int i = 0; i < n; i++)
		cout << c << endl;
}