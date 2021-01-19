#ifndef DS_LIST_H
#define DS_LIST_H

#include "node.h"

typedef struct List {
    Node* head;
    Node* tail;
    int size;
} List;

List* createList();

#endif // DS_LIST_H
