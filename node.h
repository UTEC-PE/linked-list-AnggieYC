#ifndef NODE_H
#define NODE_H

template <typename T>
struct Node {
    T data;
    struct Node* next;

	void killSelf() {
		while (head!=NULL) {
			Node <T>* temp = head;
			head = head->next;
			head->next;
			delete temp;			
		}
	};
};

#endif