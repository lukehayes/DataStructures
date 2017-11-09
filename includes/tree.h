/*-----------------------------------------------------------------------------------

	My implementation of the Tree data structure

-------------------------------------------------------------------------------------*/

#ifndef TREE_H
#define TREE_H

struct Node {
	int data;
	struct Node* left;
	struct Node* right;
};

struct Node* tree(struct Node n);

#endif