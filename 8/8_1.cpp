#include <iostream>

int cntr = 0;

void print(const char * text, int n = 0);

int main(){
	print("You gotta get up");
	print("and try");
	print("You gotta get up");
	print("and try", 1);
	system("pause");
	return 0;
}

void print(const char * text, int n){
	using namespace std;
	if(n != 0)
		for(int i = 0; i < cntr; i++)
			cout << text << endl;
	else
		cout << text << endl;
	cntr++;
}