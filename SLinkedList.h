#ifndef SLINKEDLIST_H_
#define SLINKEDLIST_H_

#include <cstdlib>



/***********************CLASS********************/
template <typename E>
class SLinkedList {				// a singly linked list


public:
	SLinkedList();				// empty list constructor
	~SLinkedList();				// destructor
	bool empty() const;				// is list empty?
	const E& front() const;			// return front element
	void addFront(const E& e);			// add to front of list
	void removeFront();				// remove front item list

protected:

	template <typename E>
	struct SNode {					// singly linked list node

		E elem;					// linked list element value
		SNode<E>* next;				// next item in the list

	};

private:

	SNode<E>* head;				// head of the list
};



/************************METHODS********************/

template <typename E>
SLinkedList<E>::SLinkedList()				// constructor
	: head(NULL) { }

template <typename E>
bool SLinkedList<E>::empty() const			// is list empty?
{
	return head == NULL;
}

template <typename E>
const E& SLinkedList<E>::front() const		// return front element
{
	return head->elem;
}



/*INSERT*/
template <typename E>
void SLinkedList<E>::addFront(const E& e) {		// add to front of list
	SNode<E>* v = new SNode<E>;				// create new node
	v->elem = e;					// store data
	v->next = head;					// head now follows v
	head = v;						// v is now the head
}


/*REMOVE*/

template <typename E>
void SLinkedList<E>::removeFront() {			// remove front item
	SNode<E>* old = head;				// save current head
	head = old->next;					// skip over old head
	delete old;						// delete the old head
}

template <typename E>
SLinkedList<E>::~SLinkedList()			// destructor
{
	while (!empty()) removeFront();
}


#endif