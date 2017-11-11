#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
#include "node.h"

int main()
{
	struct Node* n1 = malloc(sizeof(struct Node));

	free(n1);

    return 0;
}
