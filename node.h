#ifndef NODE_H
#define NODE_H

template <typename T>
struct Node {
    T data;
    struct Node* next;

	void killSelf() {
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
};

#endif