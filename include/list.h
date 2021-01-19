#ifndef DS_LIST_H
#define DS_LIST_H

#include "node.h"

typedef struct List {
    Node* head;
    Node* tail;
    int size;
} List;

#endif // DS_LIST_H
