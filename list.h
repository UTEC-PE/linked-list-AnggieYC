#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "node.h"
#include "iterator.h"

using namespace std;

template <typename T>
class List {
private:
	Node<T>* head;
	Node<T>* tail;
	int nodes;

	void print_reverse(Node<T>* head);

public:
	List() {
		head = tail = NULL;
	};

	T front() {
		if (head == NULL) throw ("Lista vacía");
		else 
			return (head-> data);
	};

	T back() {
		if (head == NULL) throw ("Lista vacía");
		else
			return (tail->data);
	};

	void push_front(T value) {
		Node <T>* temp = new Node <T>;
		temp->data = value;
		temp->next = head;
		if (head == NULL)
			head = temp = tail;
		else head->temp;
	};

	void push_back(T value) {
		if (head == NULL) {
			push_front(value);
		}
		else {
			Node <T>* temp = new Node <T>;
			temp->data = value;
			tail->next = temp;
			temp->next = NULL;
			tail->temp;
		}

	};
	
	void pop_front() {
		if (head == NULL) throw "Lista vacía";
		else {
			Node <T>* temp = head;
			head = head->next;
			delete temp;
		}
	};

	void pop_back() {
		if (head == NULL) throw "Lista vacía";
		else {
			Node <T>* temp = head;
			while (temp->next != tail) temp = temp->next;
			tail->temp;
			tail->next = NULL;
			temp = temp->next;
			delete temp;
		}

	};

	T get(int position) {
		if (position > size() || position < 0) throw "Error en la posición";
		else {
			Node <T>* temp = head;
			for (int i = 0; i < position; i++) {
				temp = temp -> next;
			}
			return temp->data;
		}
	};

	void concat(List<T> &other) {

	};

	bool empty() {
		return (head == NULL);
	};

	int size() {
		int i = 0;
		Node <T>* temp = head;
		while (temp != NULL) {
			i++;
			temp = temp->next;
		}
		return (i);
	}

	void print() {
		int i = 0;
		Node <T>* temp = head;
		if (head == NULL) throw "Lista Vacía";
		else {
			while (temp != NULL) {
				cout << temp->data;
				temp = temp->next;
			}
		}
	};
	void print_reverse() {
		if (head == NULL) throw runtime_error("No hay elemento");
		else {

		}
	};

	void clear() {
		while (head != NULL) {
			Node<T>* temp = head;
			head = head->next;
			head->next;
			delete temp;
		}
	};

	Iterator<T> begin();
	Iterator<T> end();

	~List() {
		while (head != NULL) {
			Node<T>* temp = head;
			head = head->next;
			head->next;
			delete temp;
		}
	};
};
#endif