//#include "pch.h"
#include "Account.h"

void Input(Account &a);

int main(){
	Account obj1;
	Input(obj1);
	obj1.Print_Acc();
	obj1.replenish(200.0);
	obj1.Print_Acc();
	obj1.withdraw(1000000.0);
	obj1.Print_Acc();
	obj1.withdraw(100.0);
	obj1.Print_Acc();
	system("pause");
	return 0;
}

void Input(Account &a){
	string c_num_acc;
	string c_name;
	double c_balance;
	cout << "Enter account number: ";
	getline(cin, c_num_acc);
	cout << "Enter name: ";
	getline(cin, c_name);
	cout << "Enter balance: ";
	cin >> c_balance;
	a = Account(c_num_acc, c_name, c_balance);
}
