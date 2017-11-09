/*-----------------------------------------------------------------------------------

	The node type for the tree data structure

-------------------------------------------------------------------------------------*/

#ifndef NODE_H
#define NODE_H

struct Node {
	int data;
	struct Node* left;
	struct Node* right;
};

#endif
