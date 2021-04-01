#include "list.h"
#include <stdlib.h>

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
