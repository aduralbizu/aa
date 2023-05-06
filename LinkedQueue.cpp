#include "LinkedQueue.h";

void Queue::EnQueue(Datatype Data) {
	insertback(Data);
}

bool Queue::DeQueue(Datatype& Data) {
	return deletefront(Data);
}
void Queue::PrintQueue() {
	PrintList();
}