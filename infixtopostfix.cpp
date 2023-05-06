#include "LinkedQueue.h";
#include "LinkedStack.h";
#include <string.h>
#include <iostream>

int GetOpPrec(char op) {
	switch(op) {
	case '*':case '/':
		return 3;
	case '+':case '-':
		return 2;
	case '(':
		return 1;
	}
	return -1;
}

int ComparePriority(char op1, char op2) {
	int priority1 = GetOpPrec(op1);
	int priority2 = GetOpPrec(op2);

	if (priority1 > priority2)
		return 1;
	else if (priority1 < priority2) {
		return -1;
	}
	else {
		return 0;
	}
}

void InfixtoPostfix(char* expression, Queue& queue) {
	Stack stack;
	int expLen = strlen(expression);

	char element, pop;

	for (int i = 0; i < expLen; i++) {
		element = expression[i];
		if (isdigit(element)) 
			queue.EnQueue(element);
		else {
			switch (element) {
			case '(':
				stack.Push(element);
				break;
			case ')':
				while (1) {
					stack.Pop(pop);
					if (pop == '(')
						break;
					queue.EnQueue(pop);
				}
				break;

			case '+': case '-':
			case '*': case '/':
				while (stack.Pop(pop)) {
					if (ComparePriority(pop, element) >= 0) {
						queue.EnQueue(pop);
					}
					else {
						stack.Push(pop);
						break;
					}
				}
				stack.Push(element);
			}
			

		}
	}

	while
		(stack.Pop(pop)) {
			queue.EnQueue(pop);
	}
}

