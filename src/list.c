#include "list.h"
#include <stdlib.h>

List* createList()
{
    List* list = malloc(sizeof(List));
    list->head = NULL;
    list->tail = NULL;

    return list;
}
