#pragma once
class LinkedList 
{
public:
	LinkedList() {}
	~LinkedList();

	int data;
	LinkedList *next;
	LinkedList *head = NULL;

	// Declare methods
	void addToEnd(int val);
	void insertAtBeginning(int val);
	void removeAtPosition(int pos);
	void insertAtPosition(int val, int pos);
	void appendLists(LinkedList * toAppend);
	void print();
	
};

