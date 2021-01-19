#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void printNodes(Node* node)
{
    Node* temp = node;

    while(temp->next != NULL)
    {
        printf("%i - ", temp->value);
        temp = temp->next;
    }
}

Node* addNode(Node* ptrNode, int value)
{
    Node* node = malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    ptrNode->next = node;
    
    return node;
}


int main() {

    Node* ptr, *ptr2;
    Node a,b,c;
    a.value = 3;
    b.value = 2;
    c.value = 1;


    a.next = &b;
    b.next = &c;
    c.next = NULL;

    ptr = addNode(&c, 100);
    ptr2 = addNode(ptr, 234);


    printNodes(&a);

    printf("%i \n", ptr->value);

    free(ptr);
    free(ptr2);


    return 0;
}
