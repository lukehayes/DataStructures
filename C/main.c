#include <stdio.h>
#include "node.h"


int main()
{
    node_t* head = ds_list_create_node((int*)100);
    ds_list_push_back(&head, (int*)200);
    ds_list_push_back(&head, (int*)300);
    ds_list_push_back(&head, (int*)400);
    ds_list_push_back(&head, (int*)500);

    int index = 4;

    node_t* node = ds_list_node_at_index(head, 1);

    ds_list_print_node(node);

    ds_list_free(head);

    /*free(head);*/

    return 0;
}
