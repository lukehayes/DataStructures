#include <stdio.h>
#include "ds_node.h"
#include "ds_list.h"

int main()
{
    ds_list_t* list = ds_list_create();

    ds_list_push_front(list, (int*)2);
    ds_list_push_front(list, (int*)3);

    ds_list_print(list);
    ds_list_free(list);

    return 0;
}
