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


/**
 * Create a list with head and tail set to NULL
 *
 * @return List
 */
List CreateList() {
    List list;
    list.head = NULL;
    list.tail = NULL;

    return list;
}


/**
 * Add a new node to the list struct
 *
 * @param List* list
 * @param Node* lastNode
 * @param int value
 *
 */
void AddNode(List* list, int value) {

    Node* node = (Node*) malloc(sizeof(Node));
    node->value = value;

    if(list->head == NULL) {
        puts("Head is NULL so I will add Node to head.");
        list->head = &node;
    }else {
        puts("Head set so moving on...");
        Node* head = list->head;

        while(head == NULL) {
            head = head->next++;
            printf("Searching... Value: %i\n", head->value);
        }

        head = node;
            printf("Searching... Value: %i\n", head->value);
        puts("Done");
    }
}


#endif
