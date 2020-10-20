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
    Node* current = list->head;


    if(current == NULL) {
        list->head = node;
    }else {
        Node* next = current->next;

        while(next != NULL)
        {
            printf("NUL? %i", next->value);
        }
    }
}

void PrintList(List* list)
{
    Node* current = list->head;

    if(current == NULL)
    {
        printf("List is empty.");
        return;
    }

    while( current != NULL )
    {
        static int i = 1;
        printf("Node %i: %i", i, current->value);
        i++;
        current = current->next;
    }

}


#endif
