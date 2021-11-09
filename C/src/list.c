#include "list.h"
#include "node.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct List_ {
    node_t* head;
    int size;
} List;

List* CreateList()
{
    List* list = malloc(sizeof(List));
    list->head = malloc(sizeof(node_t));
    list->head->value = 1;

    return list;
}

void  DestroyList(List* list)
{
    // TODO
}

void PrintList(List* list)
{
    node_t* temp = list->head;

    while(temp->next != NULL)
    {
        printf("%i -", temp->value);
        temp = temp->next;
    }

    printf("\n");
}

void ListInsert(List* list, int value)
{
    node_t* temporary = list->head;

    if(temporary == NULL)
    {
        printf("NULL \n");
    }

    while(temporary->next != NULL)
    {
        temporary = temporary->next;
    }

    temporary->next = (node_t*)malloc(sizeof(node_t));
    temporary->value = value;

}
