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
    /*list->head = malloc(sizeof(node_t));*/
    /*list->head->value = 304;*/

    return list;
}

void  DestroyList(List* list)
{
    node_t* head = list->head;
    node_t* temp = list->head;

    if(list->head == NULL)
    {
        free(list);
        return;
    }

    free(head);

    while(head->next != NULL)
    {
        head = head->next;
        temp = head;
        printf("Freeing %i\n", temp->value);
        free(temp);
    }

    free(list);

    printf("Done \n");
}

void PrintList(List* list)
{
    node_t* temp = list->head;

    while(temp->next != NULL)
    {
        printf("%i --► ", temp->value);
        temp = temp->next;
    }

    printf("%i --► ", temp->value);
    printf("NULL\n");
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
        list->head = (node_t*)malloc(sizeof(node_t));
        list->head->value = value;
        return;
    }

    while(temporary->next != NULL)
    {
        temporary = temporary->next;
    }

    temporary->next = (node_t*)malloc(sizeof(node_t));
    temporary->next->value = value;

}

int ListRemoveValue(List** list, int value)
{
    node_t* head = (*list)->head;

    if( head->value == value )
    {
        (*list)->head = (*list)->head->next; 
        node_t* temp = (*list)->head;
        free(head);
        return 1;
    }else
    {
        while(head->next != NULL)
        {
            if(head->value = value)
            {
                printf("Found %i\n", value);
                return;
            }
            head = head->next;
        }
    }


    /*while(temp->next != NULL)*/
    /*{*/
        /*if(temp->value == value)*/
        /*{*/
            /*printf("Found %i\n", value);*/
            /*[>temp->next = *ptrRef;<]*/
            /*[>printf("Changed %i\n", value);<]*/

        /*}else*/
        /*{*/
            /*return 0;*/
        /*}*/

        /*temp = temp->next;*/
        /*printf("Done\n");*/
    /*}*/

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
