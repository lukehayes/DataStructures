#ifndef DS_LIST_H
#define DS_LIST_H

#include "node.h"

typedef struct List {
    node_t* head;
    node_t* tail;
    int size;
} List;

List* createList();

#endif // DS_LIST_H
