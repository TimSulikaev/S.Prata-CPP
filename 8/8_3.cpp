#include <iostream>
#include <string>

using namespace std;

void ToUp(string &s);

int main(){
	using namespace std;
	string text;
	cout << "Enter a string (q to quit): ";
	cin >> text;
	while(text != "q"){
		ToUp(text);
		cout << text << endl;
		cout << "Next string (q to quit): ";
		cin >> text;
	}
	cout << "Bye." << endl;
	system("pause");
	return 0;
}

void ToUp(string &s){
	for(int i = 0; s[i]; i++)
		s[i] = toupper(s[i]);
}