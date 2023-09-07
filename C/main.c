#include <stdio.h>
#include "node.h"


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
    

    print_node_list(head);

    free(head);

    return 0;
}
