#include "pch.h"
#include <iostream>
#include "golf.h"

int main(){
	using std::cout;
	using std::cin;
	using std::endl;
	golf ann;
	setgolf(ann, "Ann Birdfree", 24);
	showgolf(ann);
	golf plrs[3];
	static int count = 0;
	for(int i = 0; i < 3; i++){
		if (!(setgolf(plrs[i])))
			break;
		count++;
	}
	if(count) {
		cout << "Score:" << endl;
		for (int i = 0; i < count; i++)
			showgolf(plrs[i]);
		cout << "Change handicaps: " << endl;
		for (int i = 0; i < count; i++) {
			int hc = 0;
			cout << "Enter new handicap for " << plrs[i].fullname << ": ";
			cin >> hc;
			handicap(plrs[i], hc);
		}
		cout << "Score:" << endl;
		for (int i = 0; i < count; i++)
			showgolf(plrs[i]);
	}
	system("pause");
	return 0;
}


