#pragma once
#include <iostream>

using namespace std;

class Plorg {
private:
	char name[20];
	int ci;
public:
	Plorg(const char * txt = "Plorga", int num = 50);
	void set(int num);
	void show() const;
};