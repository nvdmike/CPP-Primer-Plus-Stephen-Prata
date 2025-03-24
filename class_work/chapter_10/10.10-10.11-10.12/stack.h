// stack.h -- ����������� ������ ��� ������������ ���� ������ - �����
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long item;

class Stack {
	private:
		enum { MAX = 10 };			// ���������, ����������� ��� ������
		item items[MAX];			// ������ �������� �����
		int top;					// ������ ������� �����
	public:
		Stack();
		bool isempty() const;
		bool isfull() const;
		// push() ���������� false, ���� ���� �����, � true - � ��������� ������
		bool push(const item &i);	// ��������� ������� � ����
		// pop() ���������� false, ���� ���� ����, � true - � ��������� ������
		bool pop(item &i);
};

#endif