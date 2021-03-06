
/*This programm works with class AVL_Tree, but it`s without left ot right turns */

#include <iostream>
using namespace std;

struct Node {
	int data;
	int height;
	Node* left = NULL;
	Node* right = NULL;
};

class Tree { 
	Node* root;
public:
	Tree(): root(NULL) {}

	int pop() {
		Node* temp = root;
		temp = temp->right;
		while (temp->left != NULL)
			temp = temp->left;
		Node* temp2 = new Node;
		temp2 = temp->left;
		root->left = temp2;
		root = root->right;
		delete temp, temp2;
	}

	void push(Node* root, int x) {

		if (x > root->data) {
			if (root->right == NULL) {
				Node* temp = root->right;
				temp->data = x;
			}
			else
			    push(root->right, x);
		}

		if (x < root->data) {
			if (root->left == NULL) {
				Node* temp = root->left;
				temp->data = x;
			}
			else
				push(root->left, x);
		}
	}

	void del(Node* root) {
		if (root->left != NULL)
			del(root->left);
		if (root->right != NULL)
			del(root->right);
		delete root;
	}
	
	int Height(Node* root, int temp_height = 0) {
		root->height++;
		if (root->left != NULL) {
			root->left->height += root->height;
			Height(root->left, temp_height);
		}

		if (root->right != NULL) {
			root->right->height += root->height;
			Height(root->right, temp_height);
		}

		if (temp_height < root->height) 
			temp_height = root->height;
			
		return temp_height;
	}

	int Height_s_Pogreshnost(Node* root, int t = 0) { // poskolky u nas AVL derevo to visota ne budet otlichatsa bolshe chem na 1
		if (root->left != NULL)
			Height_s_Pogreshnost(root->left, t++);

		return t + 1;
	}

	int items_at_level(Node* root, int level, int items = 0) {
		if (root->left != NULL)
			if (root->left->height <= level)
				items_at_level(root->left, level, items);

		if (root->right != NULL)
			if (root->right->height <= level)
				items_at_level(root->right, level, items);

		items++;
		return items;
	}

	void po_vozrastaniu(Node* root) {
		if (root->left != NULL)
			po_vozrastaniu(root->left);

		cout << root->data;

		if (root->right != NULL)
			po_vozrastaniu(root->right);
	}

	void po_ubivaniu(Node* root) {
		if (root->right != NULL)
			po_vozrastaniu(root->right);

		cout << root->data;

		if (root->left != NULL)
			po_vozrastaniu(root->left);
	}

	~Tree() {
		del(root);
	}

};

int main()
{


	return 0;
 }

