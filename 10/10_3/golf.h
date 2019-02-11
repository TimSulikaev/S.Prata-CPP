#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class Golf {
private:
	static const int LEN = 40;
	char fullname[LEN];
	int hc;
public:
	Golf() { fullname[0] = '\0'; hc = 0; };
	Golf(const char *, int);
	~Golf() {};
	void setgolf();
	void handicap(int);
	void showgolf() const;
	bool isempty() const;
};


