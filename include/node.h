/**********************************************************************************************
*
*  Node Struct
*
**********************************************************************************************/

#ifndef NODE_H
#define NODE_H

#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node* next;
} Node;


Node* newNode(int value, Node* last) {

    Node* node = (Node*) malloc(sizeof(Node));
    node->value = value;
    last->next = node;

    return node;
}


#endif
