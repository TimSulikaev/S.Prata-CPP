#include "pch.h"
#include "golf.h"


void Golf::showgolf() const {
	cout << fullname << " : " << hc << endl;
}

bool Golf::isempty() const{
	if (fullname != '\0' && hc != 0)
		return false;
	else
		return true;
}

Golf::Golf(const char * _name, int _hc){
	strcpy_s(fullname, _name);
	hc = _hc;
}

void Golf::setgolf(){
	char text[LEN];
	int num;
	cout << "Enter player's full name: ";
	cin.getline(text, LEN);
	cout << "Enter player's handicap: ";
	(cin >> num).get();
	*this = Golf(text, num);
}

void Golf::handicap(int _hc){
	hc = _hc;
}
