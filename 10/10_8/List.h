#pragma once
#include <iostream>
#include <string>

using namespace std;

typedef string Item;

class List {
private:
	enum { MAX = 10 };
	Item items[MAX];
	int top;
public:
	List() { top = 0;  }
	bool isempty() const;
	bool isfull() const;
	bool addItem(const Item & item);
	void visit(void(*pf)(Item & item));
};