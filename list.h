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
	List();

	T front() {

	};
	T back() {

	};

	//listo
	void push_front(T value) {
		head = new Node <T>(value, head);

	};

	//Listo
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

	//Listo
	void pop_front() {
		if (head == NULL) throw runtime_error("No hay elemento");
		else {
			Node <T> temp = next;
			delete head;
			head->next = NULL;
			head = temp;
		}
	};

	//Listo
	void pop_back() {
		if (head == NULL) throw runtime_error("No hay elemento");
		else {
			Node <T> temp = head;
			while (temp.next.next != NULL) temp = temp.next;
			delete temp.next;
			temp->next = NULL;
		}

	};

	T get(int position) {
		if (position > size()) throw runtime_error("No hay elemento");

	};

	void concat(List<T> &other) {
	};

	//Listo
	bool empty() {
		return (head == NULL);
	};

	//Listo
	int size() {
		int i = 0;
		Node <T> temp = head;
		if (head == NULL) throw runtime_error("No hay elemento");
		else {
			while (temp != NULL) {
				i++;
				temp = temp.next;
			}
		}
	}

	//Listo
	void print() {
		int i = 0;
		Node <T> temp = head;
		if (head == NULL) throw runtime_error("No hay elemento");
		else {
			while (temp != NULL) {
				cout << temp << " ";
				temp = temp.next;
			}
		}
	};
	void print_reverse() {

	};
	void clear() {
	};

	Iterator<T> begin();
	Iterator<T> end();

	~List();
};
#endif

int main(int argc, char* argv[]) {

};