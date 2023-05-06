#ifndef NODE_H
#define NODE_H

typedef int Datatype; //typedef is a keyword used to create an alias name for a data type. So, typedef int datatype creates an alias name "datatype" for the data type int. This means that anywhere in the code where "datatype" is used, it is equivalent to using int

class Node {
private:
	const Datatype* Data; //Stores the data in the node.
	Node* next_Node; //Pointer to next node
public:
	Node(Datatype); //Constructor
	Datatype getData(); //returns node's data
	Node* getNextNode();//returns pointer no next node
	void setNextNode(Node*);//set pointer to next node. Takes a pointer as an argument
};


#endif


