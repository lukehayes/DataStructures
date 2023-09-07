#include "node.h"

node_t* create_node(void* value)
{
    node_t* n = malloc(sizeof(node_t));
    n->value = value;
    n->next = NULL;

    return n;
}

void connect_node(node_t* a, node_t* b)
{
    a->next = b;
}

bool node_null(node_t* n)
{
    return n == NULL ? true : false;
}

bool node_not_null(node_t* n)
{
    return !node_null(n);
}

int node_list_size(node_t* head)
{
    int index = 0;

    if(node_null(head))
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

void push_front(node_t** head, void* value)
{
    node_t* rest = *head;
    node_t* new_node = create_node(value);
    new_node->next = rest;
    *head = new_node;
}

void push_value(node_t* head, void* value)
{
    if(head == NULL)
    {
        head = create_node((int*) value);
    }else
    {
        while(head->next != NULL)
        {
            head = head->next;
        }
        head->next= create_node((int*) value);
    }
}

void push_back(node_t** head, void* value)
{
    node_t* node = *head;
    
    while(node)
    {
        if(!node->next)
        {
            node->next = create_node(value);
            return;
        }else {
            node = node->next;
        }
    }
}

node_t* get_node_at_index(node_t* head, int index)
{
    // Bail out if the index is too large or too small.
    if(index < 0 || index > node_list_size(head)) return NULL;

    printf("Here \n");

    static int index_counter = 0;
    node_t* current_node = head;

    if(index_counter == index) return head;

    while(current_node)
    {
        current_node = current_node->next;
        print_node(current_node);
        index_counter++;

        // Node has been found at the index given.
        if(index_counter == index) return current_node;
    }
}


void print_node(node_t* node)
{
    printf("Node Address: %p Node Value: %i \n", node, node->value);
}


static void print_node_value(node_t* node, int index)
{
    printf("Node Value: %i at index[%i]\n", node->value, index);
}

void print_node_list(node_t* head)
{
    int index = 0;
    if(head != NULL)
    {
        print_node_value(head, index);
    }

    while(head->next != NULL)
    {
        head = head->next;
        index++;
        print_node_value(head, index);
    }
}
