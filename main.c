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

void addNode(Node* ptrNode, int value, Node* node)
{
    node = malloc(sizeof(Node));
    node->value = value;
    node->next = NULL;
    ptrNode->next = node;
}


int main() {

    Node* ptr;
    Node a,b,c;
    a.value = 3;
    b.value = 2;
    c.value = 1;


    a.next = &b;
    b.next = &c;
    c.next = NULL;

    addNode(&c, 100, ptr);


    printNodes(&a);

    printf("%i \n", ptr->value);


    return 0;
}
