#include "node.h"
#include <stdio.h>

void ds_node_print(node_t* node)
{
    printf("Node address: %p - Node Value: %i", node, node->value);
}
