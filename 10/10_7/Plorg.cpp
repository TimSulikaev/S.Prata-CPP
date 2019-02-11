#include <cctype>
#include "pch.h"
#include "Plorg.h"

Plorg::Plorg(const char * txt, int num){
	strcpy_s(name, txt);
	ci = num;
}

void Plorg::set(int num){
	ci = num;
}

void Plorg::show() const{
	cout << "Name: " << name << endl;
	cout << "CI: " << ci << endl;
}
