// stack.h -- определение класса для абстрактного типа данных - стека
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long item;

class Stack {
	private:
		enum { MAX = 10 };		// константа, специфичная для класса
		item items[MAX];		// хранит элементы стека
		int top;			// индекс вершины стека
	public:
		Stack();
		bool isempty() const;
		bool isfull() const;
		// push() возвращает false, если стек полон, и true - в противном случае
		bool push(const item &i);	// добавляет элемент в стек
		// pop() возвращает false, если стек пуст, и true - в противном случае
		bool pop(item &i);
};

#endif
