﻿
#include <iostream>
using namespace std;

struct Node {
	string data;
	Node* next = NULL;
};

class string_queue {
	Node* head;
public:

	string_queue() : head(NULL) {}

	void push(string x) {
		if (head == NULL) {
			head = new Node;
			head->data = x;
		}
		Node* temp = head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new Node;
		temp->next->data = x;
	}

	string pop() {
		if (head == NULL) {
			cout << "Queue is empty";
			return 0;
		}
		Node* temp = head;
		while (temp->next != NULL)
			temp = temp->next;
		string x = temp->data;
		delete temp;
		return x;
	}

	~string_queue() {
		while (head != NULL)
			Node* temp = head;
		head = head->next;
		delte temp;
	}
};


int main()
{


	return 0;
}