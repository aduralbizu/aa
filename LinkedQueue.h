#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

#include "LinkedList.h"

class Queue : public List {
public:
	void EnQueue(Datatype);
	bool DeQueue(Datatype &);
	void PrintQueue();
};

#endif