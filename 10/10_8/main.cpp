#include "pch.h"
#include "List.h"

void show(Item & item);

int main() {
	List rich;
	
	string fullnames[10] = {
		"Jeff Bezos",
		"Bill Gates",
		"Warren Buffett",
		"Bernard Arnault",
		"Amancio Ortega",
		"Carlos Slim Helu",
		"Mark Zuckerberg",
		"Larry Ellison",
		"Larry Page",
		"Charles Koch"
	};

	if (rich.isempty())
		for (int i = 0; !rich.isfull(); i++)
			rich.addItem(fullnames[i]);

	rich.visit(show);

	system("pause");
	return 0;
}

void show(Item & item) {
	cout << item << endl;
}