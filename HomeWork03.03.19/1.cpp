﻿
#include <iostream>
using namespace std;

struct Node {
	double data;
	Node* next = NULL;
};

class double_stack {
	Node* head;
public:
	int double_stack() : head(NULL) {};

	void push(double x) {
		Node* temp = new Node;
		temp->data = x;
		temp->next = head;
		head = temp;
	}

	double pop() {
		if (head == NULL) {
			cout << "stack is empty";
			return 0;
		}
		Node* temp = head;
		head = head->next;
		double x = temp->data;
		delete temp;
		return x;
	}

	~double_stack() {
		while (head != NULL) {
			Node* temp = head;
			head = head->next;
			delete temp;
		}
	}
};

int main()
{





	return 0;
}