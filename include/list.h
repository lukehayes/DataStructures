#ifndef DS_LIST_H
#define DS_LIST_H

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

#endif // DS_LIST_H
