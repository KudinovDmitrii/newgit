﻿
#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* next = NULL;
};

class stack_with_max {
	Node* head;
	int MAX;
public:

	int getMAX() {
		if (head == NULL) {
			cout << "Stack is empty " << endl;
			return 0;
		}
		else
			return MAX;
	}

	int pop() {
		if (head == NULL) {
			cout << "Stack is empty " << endl;
			return 0;
		}

		if (head->data == MAX) {
			Node* temp = head;
			head = head->next;
			int x = temp->data;
			delete temp;

			Node* temp2 = head;
			int t = temp2->data;
			MAX = t;
			while (temp2 != NULL) {
				temp2 = temp2->next;
				t = temp2->data;
				if (MAX < t)
					MAX = t;
			}
			delete temp2;
			return x;
		}

		else {
			Node* temp = head;
			head = head->next;
			int x = temp->data;
			delete temp;
		}
	}

	void push(int x) {
		Node* temp = new Node;
		temp->data = x;
		temp->next = head;
		head = temp;

		if (MAX < x)
			MAX = x;
	}

};

int main() {



	return 0;
}