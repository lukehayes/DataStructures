#ifndef DS_TREE_H
#define DS_TREE_H

#include <stddef.h>
#include <stdio.h>

/**
 * The basic tree structire, a Binary Tree.
 */
typedef struct treenode
{
    int value;
    struct treenode* left;
    struct treenode* right;

} treenode;


void PrintTab(int tabs)
{
    for (int i = 0; i < tabs; i++) 
    {
        printf("\t");
    }
}

treenode* CreateNode(int value)
{
    treenode* result = malloc(sizeof(treenode));

    result->left = NULL;
    result->right = NULL;
    result->value = value;

    return result;
}


void PrintNode(treenode* node, int level)
{
    if(node == NULL)
    {
        PrintTab(level);
        printf("---<empty>---\n");
        return;
    }

    PrintTab(level);
    printf("Value: %i \n\n", node->value);
    PrintTab(level);
    printf("LEFT \n");

    PrintNode(node->left, level + 1);
    PrintTab(level);
    printf("RIGHT \n");

    PrintNode(node->right, level + 1);

}


#endif // DS_TREE_H;
