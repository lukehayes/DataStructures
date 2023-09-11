#ifndef DS_NODE_H
#define DS_NODE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct ds_node_t
{
    void* value;
    struct ds_node_t* next;
} node_t;

void ds_node_print(node_t* node);

#endif //DS_NODE_H
