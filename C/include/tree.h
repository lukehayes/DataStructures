#ifndef DS_TREE_H
#define DS_TREE_H

#include <stddef.h>
#include <stdio.h>
#include "log.h"

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

TreeNode* CreateTreeNode(int value)
{
    TreeNode* result = malloc(sizeof(TreeNode));

    result->left = NULL;
    result->right = NULL;
    result->value = value;

    return result;
}

void TreeInsertNode(TreeNode* node, int value)
{
    TreeNode** head = &node;

    if( node->value < value )
    {
        while(node->left != NULL)
        {
            node = node->left;

            if(node->left == NULL)
            {
                TreeNode* newNode = malloc(sizeof(TreeNode));
                newNode->value = value;
                node= newNode;
            }
        }
    }
}

void PrintTree(TreeNode* node, int level)
{
    if(node == NULL)
    {
        PrintTab(level);
        printf("---<empty>---\n");
        return;
    }

    PrintTab(level);
    printf("Value: %i \n\n", node->value);
    PrintValueArrow(node->value);
    PrintTab(level);
    printf("LEFT \n");

    PrintTree(node->left, level + 1);
    PrintTab(level);
    printf("RIGHT \n");

    PrintTree(node->right, level + 1);

}


#endif // DS_TREE_H;
