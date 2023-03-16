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

    push_front(&head, (int*)42);
    push_front(&head, (int*)222);
    push_front(&head, (int*)563);

    // for(int i = 1; i <= 6; ++i)
    // {
    //     push_value(head, (int*)(i*100));
    // }

    push_value(head, (int*)(888));
    
    int* res = malloc(sizeof(int));
    int idx = find_node_value(head, (int*)2888, res);
    printf("Result %i, index: %i\n", *res, idx);

    free(res);



    print_node_list(head);

    free(head);

    return 0;
}
