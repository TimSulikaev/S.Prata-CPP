//#include "pch.h"
#include "Person.h"


Person::Person(const string & ln, const char * fn){
	lname = ln;
	for(int i = 0; i < LIMIT; i++)
		fname[i] = fn[i];
}

void Person::Show() const{
	cout << lname << " ";
	cout << fname << endl;
}

void Person::FormalShow() const{
	cout << fname;
	cout << ", " << lname << endl;
}
