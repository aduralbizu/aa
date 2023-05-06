#include "Node.h"
#include <iostream>
#include <string.h>


//Constructor:
Node::Node(Datatype data) {
	this->Data = new char[strlen(data)+1];
	strcpy(this->Data, data);
	this->next_Node = NULL;
}
//Return node's data:
Datatype Node::getData() {
	return this->Data;
}
//Set pointer to next node:
void Node::setNextNode(Node* next_Node) {
	this->next_Node = next_Node;
}
//Return pointer next node:
Node* Node::getNextNode() {
	return this->next_Node;
}


