#pragma once
#include <string>
#include <iostream>

using namespace std;

class Account{
private:
	string number;
	string name;
	double balance;
public:
	Account();
	Account(string, string, double);
	~Account() {};
	void Print_Acc() const;
	void replenish(double n);
	void withdraw(double n);
};