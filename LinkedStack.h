#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H

#include "LinkedList.h"

class Stack :public List {
public: 
	void Push(Datatype);
	bool Pop(Datatype &);
	void PrintStack();
};

#endif
