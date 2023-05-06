#include "LinkedList.h"
#include <iostream> //cout

using namespace std;

List::List() { //Constructor
	head = NULL; //Initialize head
}
List::~List() {//Destructor
	Node* Delete_Node = head; //Delete node points to head
	while (Delete_Node != NULL) { //While Delete node is pointing to a node,
		head = Delete_Node->getNextNode();//we keep making the head point to the next node
		delete Delete_Node; //Deleting the node pointed by Delete_Node. deletes the memory allocated for the object pointed to by Delete_Node.
		Delete_Node = head; // Making delete node point to head again
	}
}

void List::insertfront(Datatype Data) { //Insert data to List at front
	Node* New_Node = new Node(Data); //Create new node
	if (head != NULL) { //If list is not empty
		New_Node->setNextNode(head);//New node's next node is first node 
	}
	head = New_Node;// Head change to new node
}

void List::insertback(Datatype data) { //Insert data to a list at back
	Node* New_Node = new Node(data); //Create new node
	Node* temp; //If not initialited, the member variables of the object will have an undefined value (ot well-defined or that is not guaranteed to have a specific value)

	if (head == NULL) { //if list is empty
		head = New_Node; //head is new node
	}
	else {
		temp = head;//Searching last node from front
		while (temp->getNextNode() != NULL) { //Temp move to back until next node is null
			temp = temp->getNextNode();
		}
		temp->setNextNode(New_Node); //Last node's next node is new node

	}

}

bool List::deletefront(Datatype& data) { //Delete data from list at front
	if (head == NULL) { //if list is empty
		cout << "Error: Empty" << endl; //Print out error message
		return false;//Return false;
	}
	Node* Delete_Node; //Pointer for deleted node
	Delete_Node = head; // Delete node is first node
	head = head->getNextNode();//Head change to second node
	//Return deleted node's data by reference
	data = Delete_Node->getData();
	delete Delete_Node; //Delete node
	return true; 

}

bool List::deleteback(Datatype& Data) { //Delete data from list at back
	if (head == NULL) { //If list is empty
		cout << "Error: Empty" << endl; //Print out error message
		return false; //return false
	}

	Node* Delete_Node = head; //Initialize pointer for deleted node
	Node* Prev_Node = NULL; //Initialize pointer for previous node
	if (Delete_Node->getNextNode() == NULL) {//case 1: List 1 has one node
		head = NULL; //Head changes to null
	}
	else { //Case 2: List has 2 or more nodes
		//Find last node from front to back (back" of a linked list refers to the last node in the list)
		while (Delete_Node->getNextNode() != NULL) {
			Prev_Node = Delete_Node;
			Delete_Node = Delete_Node->getNextNode();
		}
		Prev_Node->setNextNode(NULL); //Prev node's next node changes to null

	}

	//Return deleted node's data by reference.
	Data = Delete_Node->getData();
	delete Delete_Node;  //Delete data 
	return true; //Return data


}

void List::PrintList() { //Print list
	if (head == NULL) { //If list is empty
		cout << "Empty" << endl;  //Print error message
	}
	else {
		Node* Print_Node = head;
		cout << "Data: ";
		while (Print_Node != NULL) { //If node is not null
			cout << Print_Node->getData() << " "; //Print out node's next data
			Print_Node = Print_Node->getNextNode();//Move to next node
		}
		cout << endl;
	}
}