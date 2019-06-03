/*-----------------------------------------------------------------------------------

	The node type for the tree data structure

-------------------------------------------------------------------------------------*/

#ifndef NODE_H
#define NODE_H

class Node
{
public:
	Node();
	Node(int data);
	~Node();

	/**
	 * Get the next node
	 * @return [description]
	 */
	Node* getNext();
private:
	int data;
	Node* next;
};

#endif
