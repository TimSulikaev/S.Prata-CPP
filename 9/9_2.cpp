#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void strcount(string str);

int main(){
	string input;
	cout << "Enter a line (empty line to quit): \n";
	getline(cin, input);
	while (input != "") {
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
		getline(cin, input);
	}
	cout << "Bye\n";
	system("pause");
	return 0;
}

void strcount(string str) {
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\" contains ";
	for(int i = 0; i < str.size(); i++)
		count++;
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}


