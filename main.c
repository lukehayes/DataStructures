#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
#include "node.h"

int main()
{
    struct Node* n1 = malloc(sizeof(struct Node));
    n1->data = 100;

    struct Node* n2 = malloc(sizeof(struct Node));
    n2->data = 333;

    tree(n1);


    free(n1);
	free(n2);

    return 0;
}
