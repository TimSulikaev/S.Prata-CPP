#include <iostream>
#include <cstring>
#include "golf.h"


void setgolf(golf & g, const char * name, int hc){
	strcpy_s(g.fullname, name);
	g.handicap = hc;
}

int setgolf(golf & g){
	using std::cin;
	using std::cout;
	using std::endl;
	char text[Len];
	int num;
	cout << "Enter player's full name: ";
	cin.getline(text, Len);
	if(!strlen(text))
		return 0;
	cout << "Enter player's handicap: ";
	(cin >> num).get();
	setgolf(g, text, num);
	return 1;
}

void handicap(golf & g, int hc){
	g.handicap = hc;
}

void showgolf(const golf & g){
	std::cout << g.fullname << " : " << g.handicap <<  std::endl;
}
