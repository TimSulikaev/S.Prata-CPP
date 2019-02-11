//#include "pch.h"
#include "Account.h"

Account::Account(){
	number = "0";
	name = "NULL";
	balance = 0.0;
}

Account::Account(string num_acc, string name_acc, double bal_acc){
	number = num_acc;
	name = name_acc;
	balance = bal_acc;
}

void Account::Print_Acc() const{
	cout.precision(2);
	cout << "==============================" << endl;
	cout << "Name: " << name << endl;
	cout << "Account number: " << number << endl;
	cout << "Balance: " << fixed << balance << endl;
	cout << "==============================" << endl;
}

void Account::replenish(double n){
	cout.precision(2);
	cout << "Replenish +" << fixed << n << endl;
	balance += n;
}

void Account::withdraw(double n){
	cout.precision(2);
	cout << "Withdraw -" << fixed << n << endl;
	if (balance < n)
		cout << "Not enough funds" << endl;
	else
		balance -= n;
}
