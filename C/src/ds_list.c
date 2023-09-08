#include "ds_list.h"
#include <stdio.h>

typedef struct ds_node_t
{
    void* value;
    struct ds_node_t* next;
} node_t;

typedef struct ds_list_t
{
    node_t* head;
} ds_list_t;


ds_list_t* ds_list_create()
{
    ds_list_t* list = malloc(sizeof(ds_list_t));
    return list;
}

/*bool ds_list_node_not_null(node_t* n)*/
/*{*/
    /*return !ds_list_node_null(n);*/
/*}*/

int ds_list_size(ds_list_t* list)
{
    int index = 0;

    node_t* head = list->head;

    if(!head)
    {
        return index;
    }
    else
    {
        index++;
        while(head->next != NULL)
        {
            head = head->next;
            index++;
        }
    }

    return index;
}

void ds_list_push_front(ds_list_t* list, void* value)
{
    node_t* head = list->head;

    if(!head)
    {
        head = malloc(sizeof(node_t));
        head->value = value;
    } else 
    {
        node_t* rest = head->next;
        node_t* new_node = malloc(sizeof(node_t));
        new_node->next = rest;
        list->head = new_node;
    }
}

void ds_list_push_back(ds_list_t* list, void* value)
{
    node_t* node = list->head;
    
    while(node)
    {
        if(!node->next)
        {
            node->next = malloc(sizeof(node_t));
            node->next->value = value;
            return;
        }else {
            node = node->next;
        }
    }
}

void ds_list_free(ds_list_t* list)
{
    node_t* current = list->head;
    while(current != NULL)
    {
        node_t* prev_node = current;
        current = current->next;

        free(prev_node);
        prev_node = NULL;
    }

}

node_t* ds_list_node_at_index(ds_list_t* list, int index)
{
    // Bail out if the index is too large or too small.
    if(index < 0 || index > ds_list_size(list)) return NULL;

    static int index_counter = 0;
    node_t* current_node = list->head;

    if(index_counter == index) return list;

    while(current_node)
    {
        current_node = current_node->next;
        ds_list_print_node(current_node);
        index_counter++;

        // Node has been found at the index given.
        if(index_counter == index) return current_node;
    }
}


void ds_list_print_node(node_t* node)
{
    if(node)
    {
        printf("Node Address: %p Node Value: %i \n", node, node->value);
    }else 
    {
        printf("Node NULL \n");
    }
}


static void ds_list_print_node_value(node_t* node, int index)
{
    printf("Node Value: %i at index[%i]\n", node->value, index);
}

void ds_list_print(ds_list_t* list)
{
    node_t* head = list->head;

    while(head)
    {
        printf("Node: %i \n", head->value);
        head = head->next;
    }
}
