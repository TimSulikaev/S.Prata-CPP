#include <cctype>
#include "pch.h"
#include "stack.h"

int main() {
	Stack st;
	char ch;
	customer temp;
	cout << "Please, enter:" << endl;
	cout << "\tA - to add customer" << endl;
	cout << "\tD - to delete customer" << endl;
	cout << "\tQ - to quit" << endl;

	while (cin >> ch && toupper(ch) != 'Q') {
		while (cin.get() != '\n')
			continue;
		if (!isalpha(ch)) {
			cout << '\a';
			continue;
		}
		
		switch (ch){
			case 'A':
			case 'a':
				if (st.isfull())
					cout << "stack already full\n";
				else {
					cout << "Enter name customer: ";
					gets_s(temp.fullname, 35);
					cout << "Enter payment: ";
					cin >> temp.payment;
					st.push(temp);
				}
				break;
			case 'D':
			case 'd':
				if (st.isempty())
					cout << "stack already empty" << endl;
				else {
					st.pop(temp);
					cout << "Customer " << temp.fullname << " popped" << endl;
				}
				break;
		}
		cout << "Please, enter:" << endl;
		cout << "\tA - to add customer" << endl;
		cout << "\tD - to delete customer" << endl;
		cout << "\tQ - to quit" << endl;
	}
	system("pause");
	return 0;
}