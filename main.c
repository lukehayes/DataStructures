#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
#include "node.h"

int main()
{
	struct Node* n1 = malloc(sizeof(struct Node));
	n1->data = 6;

	struct Node* n2 = malloc(sizeof(struct Node));
	n2->data = 10;

	struct Node* n3 = malloc(sizeof(struct Node));
	n3->data = 3;



	free(n1);
	free(n2);
	free(n3);
    return 0;
}
