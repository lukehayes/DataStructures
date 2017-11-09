/*-----------------------------------------------------------------------------------

	My implementation of the Tree data structure

-------------------------------------------------------------------------------------*/

struct Node {
	int data;
	struct Node* left;
	struct Node* right;
};

struct node* tree(struct Node n);