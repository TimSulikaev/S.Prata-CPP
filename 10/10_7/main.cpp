#include "pch.h"
#include "Plorg.h"

int main() {
	Plorg pl1;
	Plorg pl2 = Plorg("Mat", 65);
	Plorg pl3 = Plorg("Slim", 75);
	pl1.show();
	pl2.show();
	pl3.show();
	pl1.set(72);
	pl1.show();
	pl2.show();
	pl3.show();
	system("pause");
	return 0;
}