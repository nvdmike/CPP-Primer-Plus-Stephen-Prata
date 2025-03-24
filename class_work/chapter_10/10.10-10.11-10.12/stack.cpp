// stack.cpp -- функции-члены класса Stack
#include "stack.h"

Stack::Stack() {	// создание пустого стека
	top = 0;
}

bool Stack::isempty() const {
	return top == 0;
}

bool Stack::isfull() const {
	return top == MAX;
}

bool Stack::push(const item &i) {
	if (top < MAX) {
		items[top++] = i;
		return true;
	} else
		return false;
}

bool Stack::pop(item &i) {
	if (top > 0) {
		i = items[--top];
		return true;
	} else
		return false;
}