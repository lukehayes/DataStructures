#include <stdio.h>
#include <stdlib.h>
#include "tree.h"


int main() {

    treenode* t1 = CreateNode(1);
    treenode* t2 = CreateNode(2);
    treenode* t3 = CreateNode(3);
    treenode* t4 = CreateNode(4);
    treenode* t5 = CreateNode(5);
    treenode* t6 = CreateNode(100);


    t1->left = t2;
    t1->right = t3;

    t3->left = t4;
    t3->right = t5;


    /*t2->right = t6;*/
    
    PrintNode(t1, 1);


    free(t1);
    free(t2);
    free(t3);
    free(t4);
    free(t5);
    free(t6);

    return 0;
}
