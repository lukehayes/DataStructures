/**********************************************************************************************
*
*  Single and double linked lists are defined in this folder
*
**********************************************************************************************/

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "node.h"

/**
 * Doubly Linked List
 */
typedef struct List {
    Node* head;
    Node* tail;
} List;


#endif
