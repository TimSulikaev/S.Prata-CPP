#include "pch.h"
#include "List.h"

bool List::isempty() const{
	return top == 0;
}

bool List::isfull() const{
	return top == MAX;
}


bool List::addItem(const Item & item){
	if (top < MAX) {
		items[top++] = item;
		return true;
	}
	else
		return false ;
}

void List::visit(void(*pf)(Item & item)){
	for (int i = 0; i < MAX; i++) {
		cout << "#" << i + 1 << ": ";
		pf(items[i]);
	}
}



