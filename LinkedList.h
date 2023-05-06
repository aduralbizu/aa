#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "Node.h"

class List {
private:
	Node* head;
public:
	List();//Constructor
	~List();//Destructor
	void insertfront(Datatype);//Insert data to list at front
	void insertback(Datatype); //insert data to list at back
	bool deletefront(Datatype&); //Delete data from list at front. Takes a reference to a Datatype object as an argument
	bool deleteback(Datatype&); //Delete data from list at back
	void PrintList();  //Prints list

};
#endif