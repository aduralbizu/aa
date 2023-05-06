#include "LinkedStack.h"

void Stack::Push(Datatype Data) {
	insertfront(Data);
}

bool Stack::Pop(Datatype& Data) {
	return deletefront(Data);
}
void Stack::PrintStack() {
	PrintList();
}