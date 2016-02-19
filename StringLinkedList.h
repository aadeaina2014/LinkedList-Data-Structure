#ifndef StringLinkedList_H_
#define StringLinkedList_H_

#include <string>

/*********************** Node************************/

class StringNode {				// a node in a list of strings
private:
	std::string elem;				// element value
	StringNode* next;				// next item in the list

	friend class StringLinkedList;		// provide StringLinkedList access
};

/********************Node Class Definition ********************/
class StringLinkedList {			// a linked list of strings
public:
	StringLinkedList();				// empty list constructor
	~StringLinkedList();			// destructor
	bool empty() const;				// is list empty?
	const std::string& front() const;		// get front element
	void addFront(const std::string& e);		// add to front of list
	void removeFront();				// remove front item list
private:
	StringNode* head;				// pointer to the head of list
};

#endif