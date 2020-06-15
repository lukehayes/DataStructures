#include <stdio.h>
#include <stdlib.h>

#include "node.h"

int main() {

    Node* n1 = (Node*) malloc(sizeof(Node));
    n1->value = 1;
    Node* n2 = newNode(2, n1);
    Node* n3 = newNode(10, n2);

    printf("%i\n", n1->value);
    printf("%i\n", n2->value);
    printf("%i\n", n3->value);


    free(n1);
    free(n2);


    return 0;
}
