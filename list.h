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
	List(); // No se implementó

	T front() {
		return (*head); // No, deberáis controlar el caso vacía, y retornar head->data
	};

	T back() {
		return (*tail); // No, deberáis controlar el caso vacía, y retornar tail->data
	};

	void push_front(T value) {
		head = new Node <T>(value, head);

	};

	void push_back(T value) {
		if (head == NULL) {
			push_front(value)
		}
		else {
			Node <T> temp = head;
			while (temp != NULL) temp = temp.next;
			temp.next = new Node <T>(value, NULL);
		}

	};

	void pop_front() {
		if (head == NULL) throw runtime_error("No hay elemento");
		else {
			Node <T> temp = next;
			delete head;
			head->next = NULL;
			head = temp;
		}
	};

	void pop_back() {
		if (head == NULL) throw runtime_error("No hay elemento");
		else {
			Node <T> temp = head; // head es un puntero, esto no se puede hacer
			while (temp.next.next != NULL) temp = temp.next;
			delete temp.next;
			temp->next = NULL;
		}

	};



	T get(int position) { // No se implementó
		if (position > size()) throw runtime_error("No hay elemento");
		else {
		}

	};

	void concat(List<T> &other) { // No se implementó

	};


	bool empty() {
		return (head == NULL);
	};

	int size() {
		int i = 0;
		Node <T> temp = head; // Head es un puntero, esto no se puede hacer
		if (head == NULL) throw runtime_error("No hay elemento");
		else {
			while (temp != NULL) {
				i++;
				temp = temp.next;
			}
		}
		return (i);
	}

	void print() {
		int i = 0;
		Node <T> temp = head; // Head es un puntero esto no se puede hacer
		if (head == NULL) throw runtime_error("No hay elemento");
		else {
			while (temp != NULL) {
				cout << *temp << " ";
				temp = temp.next; // next es un puntero, no puedes hacer esto
			}
		}
	};
	void print_reverse() { // No se implementó
		if (head == NULL) throw runtime_error("No hay elemento");
		else {

		}
	};

	void clear() {
		Node <T> temp = head;
		if (head == NULL) throw runtime_error("No hay elemento");
		else {
			while (temp != NULL) {
				temp = temp.next;
				delete head;
				head = temp;				
			}
		}
	};

	Iterator<T> begin();
	Iterator<T> end();

	~List(); // No se implementó
};
#endif