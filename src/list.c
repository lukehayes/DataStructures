#include "list.h"
#include "node.h"
#include <stdlib.h>

typedef struct List_ {
    node_t* head;
    node_t* tail;
    int size;
} List;

List* CreateList()
{
    List* list = malloc(sizeof(List));
    list->head = NULL;
    list->tail = NULL;

    return list;
}

void  DestroyList(List* list)
{
    // TODO
}

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
