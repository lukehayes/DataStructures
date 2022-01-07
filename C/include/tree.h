#ifndef DS_TREE_H
#define DS_TREE_H

#include <stddef.h>
#include <stdio.h>

/**
 * The basic tree structire, a Binary Tree.
 */
typedef struct TreeNode
{
    int value;
    struct TreeNode* left;
    struct TreeNode* right;

} TreeNode;


void PrintTab(int tabs)
{
    for (int i = 0; i < tabs; i++) 
    {
        printf("\t");
    }
}

TreeNode* CreateNode(int value)
{
    TreeNode* result = malloc(sizeof(TreeNode));

    result->left = NULL;
    result->right = NULL;
    result->value = value;

    return result;
}

void TreeInsertNode(TreeNode* node, int value)
{
    int head = node->value;

    if(value > head)
    {
        node->right = malloc(sizeof(int));
        node->right->value = node->value;
    } else
    {
        node->left = malloc(sizeof(int));
        node->left->value = value;
    }


}

void PrintNode(TreeNode* node, int level)
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
