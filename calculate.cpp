#include "LinkedQueue.h";
#include "LinkedStack.h";
#include <iostream>

int CalculatePostFix(Queue& queue) {
	Stack stack;
	char pop, num1, num2;
	char result;
	while (queue.DeQueue(pop)) {
		if (isdigit(pop))
			stack.Push(pop - '0'); //Converts to integer
		else {
			stack.Pop(num2);
			stack.Pop(num1);
			switch (pop) {
			case '+':
				stack.Push(num1 + num2);
				break;
			case '-':
				stack.Push(num1 - num2);
				break;
			case '*':
				stack.Push(num1 * num2);
				break;
			case '/':
				stack.Push(num1 / num2);
				break;
			}
		}

	}

	stack.Pop(result);
	return result;
}