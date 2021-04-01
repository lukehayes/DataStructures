#include <stdio.h>
#include <stdlib.h>
#include "node.h"


void p(node_t* head)
{
    node_t* temp = head;

    while(temp != NULL)
    {
        printf("%i -", temp->value);
        temp = temp->next;
    }

    printf("\n");
}

int main() {

    struct node_t n1,n2,n3;

    n1.value = 55;
    n2.value = 803;
    n3.value = 7;

    n1.next = &n2;
    n3.next = &n1;
    n2.next = NULL;


    p(&n3);

    return 0;
}
