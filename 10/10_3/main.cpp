#include "pch.h"
#include "golf.h"

int main() {
	static int count = 0;
	Golf ann = Golf("Ann Birdfree", 24);
	ann.showgolf();
	Golf plrs[3];
	for (int i = 0; i < 3; i++)
		plrs[i].setgolf();

	for (int i = 0; i < 3; i++) {
		if (plrs[i].isempty())
			break;
		count++;
	}
	if (count) {
		cout << "Score:" << endl;
		for (int i = 0; i < count; i++)
			plrs[i].showgolf();
		cout << "Change handicaps: " << endl;
		for (int i = 0; i < count; i++) {
			int _hc = 0;
			cout << "Enter new handicap for " << i + 1 << " player" << ": ";
			cin >> _hc;
			plrs[i].handicap(_hc);
		}
		cout << "Score:" << endl;
		for (int i = 0; i < count; i++)
			plrs[i].showgolf();
	}
	system("pause");
	return 0;
}


