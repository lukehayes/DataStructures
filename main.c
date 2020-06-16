#include <stdio.h>
#include <stdlib.h>

#include "linked-list.h"
#include "node.h"

int main() {

    List list = CreateList();

    AddNode(&list, 1);
    AddNode(&list, 2);
    AddNode(&list, 3);
    AddNode(&list, 4);



    return 0;
}
