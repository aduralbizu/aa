#include <iostream>
#include "LinkedQueue.h"
#include "LinkedStack.h"
#include "calculate.cpp"
#include "infixtopostfix.cpp"

using namespace std;

void main() {
	//Infix expression
	char expression[] = "1 - ( 2 + 3 * 4 ) / 5";
	Queue postfix;

	cout << "Write infix expression: " << expression << endl;
	InfixtoPostfix(expression, postfix);
	cout << "Postfix expression: ";
	postfix.PrintQueue();
	cout << "Result: " << CalculatePostFix(postfix) << endl;



}
