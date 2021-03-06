﻿#include <iostream>
using namespace std;

struct Node {
	char data;
	Node* next = NULL;
	Node* prev = NULL;
};

class char_deque {
	Node* head;
	Node* tail;
public:
	char_deque() : head(NULL) {}

	void push_front(char x) {
		if (head != NULL) {
			head = new Node;
			tail = head;
			head->data = x;
		}
		head->prev = new Node;
		head->prev->next = head;
		head = head->prev;
		head->data = x;
	}

	void push_back(char x) {
		if (head == NULL) {
			head = new Node;
			tail = head;
			head->data = x;
		}
		Node* temp = head;
		while (temp->next != NULL)
			temp->next;
		temp->next = new Node;
		temp->next->prev = temp;
		temp->next->data = x;
	}

	char pop_front() {
		if (head == NULL) {
			cout << "Deque is empty";
			return 0;
		}
		Node* temp = head;
		head = head->next;
		char x = temp->data;
		delete temp;
		return x;
	}

	char pop_back() {
		if (head == NULL) {
			cout << "Deque is empty";
			return 0;
		}
		Node* temp = head;
		while (temp->next != NULL)
			temp->next;
		char x = temp->data;
		delete temp;
		return x;
	}

	~char_deque() {
		while (head != NULL) {
			Node* temp = head;
			head = head->next;
			delte temp;
		}
	}
};


int main()
{


	return 0;
}