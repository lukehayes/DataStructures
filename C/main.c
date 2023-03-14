#include <stdio.h>

#include "node.h"

void pn(node_t* node)
{
    printf("Node: %i, Next: %p \n", node->value, node->next);
}

int main()
{
    node_t* head = create_node((int*)100);
    push_value(head, (int*)200);

    for(int i = 3; i <= 5; i++)
    {
        push_value(head, (int*)(i*100));
    }

    push_front(&head, (int*)42);
    push_front(&head, (int*)213123123);
    push_front(&head, (int*)563);

    print_node_list(head);

    free(head);

    return 0;
}
