#include <cctype>
#include "pch.h"
#include "Move.h"

int main() {
	cout << "Init" << endl;
	Move obj1 = Move(2.0, 5.5);
	Move obj2 = Move(3.0, 6.25);
	Move obj3;
	obj1.showmove();
	obj2.showmove();
	obj3.showmove();
	cout << "Adding obj1 + obj2" << endl;
	obj3 = obj2.add(obj1);
	obj1.showmove();
	obj2.showmove();
	obj3.showmove();
	cout << "Resetting" << endl;
	obj1.reset();
	obj2.reset();
	obj3.reset();
	obj1.showmove();
	obj2.showmove();
	obj3.showmove();
	system("pause");
	return 0;
}