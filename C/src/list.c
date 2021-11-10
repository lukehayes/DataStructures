#include "list.h"
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
    list->head->value = 304;

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

int ListFindValue(List* list, int value)
{
    node_t* temp = list->head;

    while(temp->next != NULL)
    {

        if(temp->value == value)
        {
            return temp->value;
        }else
        {
            return 0;
        }

        temp = temp->next;
    }
}

void ListInsertEnd(List* list, int value)
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

int ListRemoveValue(List* list, int value)
{
    node_t** ptrRef = &list->head;

    node_t* temp = list->head;

    while(temp->next != NULL)
    {
        if(temp->value == value)
        {
            temp->next = *ptrRef;

        }else
        {
            return 0;
        }

        temp = temp->next;
    }

}

node_t* ListGetHead(List* list)
{
    if(list->head == NULL)
    {
        return 0;

    } else
    {
        return list->head;
    }
}

int ListGetHeadValue(List* list)
{
    if(list->head == NULL)
    {
        return 0;

    } else
    {
        return list->head->value;
    }
}
