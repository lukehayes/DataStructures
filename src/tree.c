#include "tree.h"
#include "node.h"
#include <stdio.h>

struct Node* tree(struct Node n ) {
	struct Node* current = NULL;

	if( current == 0 ) {
		current = &n;
	}

	printf("Current data: %i ", n.data);

	return current;
}