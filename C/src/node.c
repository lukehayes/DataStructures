#include "node.h"
#include <stdio.h>

node_t* ds_list_create_node(void* value)
{
    node_t* n = malloc(sizeof(node_t));
    n->value = value;
    n->next = NULL;

    return n;
}

void ds_list_connect_node(node_t* a, node_t* b)
{
    a->next = b;
}

bool ds_list_node_null(node_t* n)
{
    return n == NULL ? true : false;
}

bool ds_list_node_not_null(node_t* n)
{
    return !ds_list_node_null(n);
}

int ds_list_size(node_t* head)
{
    int index = 0;

    if(ds_list_node_null(head))
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

void ds_list_push_front(node_t** head, void* value)
{
    node_t* rest = *head;
    node_t* new_node = ds_list_create_node(value);
    new_node->next = rest;
    *head = new_node;
}

void ds_list_push_back(node_t** head, void* value)
{
    node_t* node = *head;
    
    while(node)
    {
        if(!node->next)
        {
            node->next = ds_list_create_node(value);
            return;
        }else {
            node = node->next;
        }
    }
}

void ds_list_free(node_t* head)
{
    int size = ds_list_size(head);
    printf("Size: %i \n", size);

    // FIXME Segfault,crash, bang, wallop.
    for(int i = size; i >= 0; i--)
    {
        printf("I %i \n", i);
        node_t* node = ds_list_node_at_index(head, i);
        ds_list_print_node(node);
    }
}

node_t* ds_list_node_at_index(node_t* head, int index)
{
    // Bail out if the index is too large or too small.
    if(index < 0 || index > ds_list_size(head)) return NULL;

    static int index_counter = 0;
    node_t* current_node = head;

    if(index_counter == index) return head;

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
    printf("Node Address: %p Node Value: %i \n", node, node->value);
}


static void ds_list_print_node_value(node_t* node, int index)
{
    printf("Node Value: %i at index[%i]\n", node->value, index);
}

void ds_list_print_node_list(node_t* head)
{
    int index = 0;
    if(head != NULL)
    {
        ds_list_print_node_value(head, index);
    }

    while(head->next != NULL)
    {
        head = head->next;
        index++;
        ds_list_print_node_value(head, index);
    }
}
