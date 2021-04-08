#ifndef DS_LIST_H
#define DS_LIST_H

#include <stddef.h>
#include "node.h"

typedef struct List {
    node_t* head;
    node_t* tail;
    int size;
} List;

List* CreateList();

/**
 * Free all the memory that the list has taken
 */
void  DestroyList(List* list);

/**
 * Output a formatted view of the list.
 */
void PrintList(node_t* head)
{
    node_t* temp = head;

    while(temp != NULL)
    {
        printf("%i -", temp->value);
        temp = temp->next;
    }

    printf("\n");
}

#endif // DS_LIST_H
